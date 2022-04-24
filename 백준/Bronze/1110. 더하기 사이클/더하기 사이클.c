#include<stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    int result, a, b, c, d;
    int count=0;
    result=number;
    while(1)
    {
        a=number/10;
        b=number%10;
        c=(a+b)%10;
        d=(b%10)*10;
        number=c+d;
        count++;
        if(number==result) break;
    }
    printf("%d", count);
}