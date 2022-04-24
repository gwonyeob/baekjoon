#include<stdio.h>// 두 정수: A, B
int main()
{
    int A, B;
    while(1)
    {
        scanf("%d %d", &A, &B);
        if(A==0 && B==0) break;
        printf("%d\n", A+B);
    }
 
    return 0;
}
    