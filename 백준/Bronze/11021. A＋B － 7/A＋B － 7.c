#include<stdio.h>
int main()
{
    int T=0;
    scanf("%d", &T);
    for(int i=1; i<=T; i++)
    {
        int A=0, B=0;
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", i, A+B);
    }
    return 0;
      
}