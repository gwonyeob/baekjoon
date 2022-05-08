#include<stdio.h>
int main()
{
    int H, M, S, h, m, f;
    scanf("%d %d", &H, &M);
    scanf("%d", &S);
    h = (S+M) /60;
    m = (S+M) % 60;
    f = H + h;
    f %=24;
    printf("%d %d", f, m);
    return 0;
}