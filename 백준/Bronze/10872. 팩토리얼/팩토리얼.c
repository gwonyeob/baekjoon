#include<stdio.h>
int fact(int n)
{
	if (n > 1)
	{
		return n * fact(n - 1);
	}
	else //n=1
		return 1;
}
int main()
{
	int num;
	scanf("%d", &num);
	printf("%d\n", fact(num));
	return 0;
}