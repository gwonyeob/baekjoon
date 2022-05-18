#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N*N; i++){
        putchar('*');
        !(i%N) && putchar(10);
    }
}