#include<stdio.h>//두 정수: A, B
int main()
{
    int A, B;
    while(scanf("%d %d", &A, &B)!=EOF)
    {
        printf("%d\n", A+B);
    }
    return 0;
}