#include<stdio.h>
int main()
{
    int first, h, t, o;
    scanf("%d %1d%1d%1d", &first, &h, &t, &o);
    printf("%d\n", first*o);
    printf("%d\n", first*t);
    printf("%d\n", first*h);
    printf("%d", first*o+first*t*10+first*h*100);
    return 0;
}