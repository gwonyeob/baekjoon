#include<stdio.h>
#include<string.h>
int main()
{
	long long int i, j, n, sum = 0;
	char num1[10001]={0}; //첫번째 숫자
	char num2[10001]={0}; //두번째 숫자
	scanf("%s", num1, sizeof(num1));
	getchar();
	scanf("%s", num2, sizeof(num2));
	for (i = 0; i < strlen(num1); i++)
	{
		for (j = 0; j < strlen(num2); j++)
		{
			sum += ((num1[i] - '0') * (num2[j] - '0'));
		}
	}
	printf("%lld", sum);
	return 0;
}