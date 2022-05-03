#include<stdio.h>
long long fb(int n) //재귀 호출
{
	long long result = 0;
	if (n < 1)
	{
		return 0;
	}
	else if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return (fb(n - 1) + fb(n - 2));
	}
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%lld", fb(num));
	return 0;
}