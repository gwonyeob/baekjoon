#include<stdio.h>
int main()
{
	int t = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int num1 = 0, num2=0;
		int cd = 0;
		int cm = 0; 
		scanf("%d %d", &num1, &num2);
		for (int i = 1; i <= num1 && i <= num2; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
				cd = i;
		}
		cm = num1 * num2 / cd;
		printf("%d\n", cm);
	}
	return 0;
}