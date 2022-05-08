#include<stdio.h>
int main()
{
	int num1, num2;
	int cd = 0; //최대 공약수
	int cm = 0; //최소 공배수
    scanf("%d %d", &num1, &num2);
	for (int i = 1; i <= num1 && i <= num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
			cd = i;
	}
	cm = num1 * num2 / cd;
	printf("%d\n", cd);
	printf("%d", cm);
} 
//최소 공배수는 두 수의 최대 공약수로 나눈 후 나머지 둘을 곱하면 나옴