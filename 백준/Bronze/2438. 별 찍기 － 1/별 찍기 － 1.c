#include<stdio.h>//N: 별의 개수, for문: i,p
int main()
{
    int N;
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        for(int p=0; p<i+1; p++)
            printf("*");        
        printf("\n");
    }
    return 0;
}