#include<stdio.h>
int main()
{
    float a, b;
    int s;
    scanf("%f %f", &a, &b);
    if(a>0&b>0)
        s=1;
    else if(a<0&b>0)
        s=2;
    else if(a<0&b<0)
        s=3;
    else if(a>0&b<0)
        s=4;
    printf("%d", s);
    return 0;
}