#include<stdio.h>
int main()
{
    int a;
    char grade;
    scanf("%d", &a);
    if(a>=90)
        grade= 'A';
    else if(a>=80)
        grade= 'B';
    else if(a>=70)
        grade= 'C';
    else if(a>=60)
        grade= 'D';
    else
        grade= 'F';
    printf("%c", grade);
    return 0;
}