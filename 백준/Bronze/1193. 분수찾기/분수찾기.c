#include <stdio.h>
int main() 
{
    int num=0;
    int numerator, denominator; //numerator: 분자, denominator: 분모
    int n = 1; //n은 1부터 시작
    scanf("%d", &num);
    while (1) 
    {
        if ((n - 1) * n / 2 + 1 <= num && num <= n * (n + 1) / 2)
        {
            break;
        }
        n++;
    }
    if (n % 2 == 0) 
    { 
        numerator = num - (n - 1) * n / 2; 
        denominator = (n + 1) - numerator; 
    }
    else 
    { 
        denominator = num - (n - 1) * n / 2; 
        numerator = (n + 1) - denominator; 
    }
    printf("%d/%d", numerator, denominator);
}