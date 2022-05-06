#include<stdio.h>
int main()
{
    int a, b, c ;
    int max = 0;
    scanf("%d %d %d", &a, &b, &c); //순서대로 각각의 주사위
    if (a ==b&&b==c&&c==a)
    {
        printf("%d", 10000 + 1000 * a);
    }
    else if (a == b||b==c)
    {
        printf("%d", 1000 + 100 * b);
    }
    else if (a == c)
    {
        printf("%d", 1000 + 100 * c);
    }
    else
    {
        max=a>b?a:b;
        max=max>c?max:c;
        printf("%d", max * 100);
    }
}