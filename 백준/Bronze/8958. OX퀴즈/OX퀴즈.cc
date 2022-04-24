#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n;
    char s[100];
 
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        int sum = 0, add = 1; // add에 0으로 선언해버리면 1점이 아니라 0점부터 시작함
        scanf("%s", s); // 문자열 입력 &입력 안해도 됨.
 
        for (int j = 0; j < strlen(s); j++) { // strlen을 이용하여 문자열 길이를 구해서 
// 문자열이 끝날때까지 반복문을 돈다.
            if (s[j] == 'O') {
                sum += add; // O이 1개면 1점
                add++; // O이 반복으로 나오면 증가해서 더해짐
            }
            if (s[j] == 'X') {
                add = 1;
            }
        }
        printf("%d\n", sum);
    }
}
