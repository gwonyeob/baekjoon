#include <stdio.h>
int main()
{
	int n = 0;
	int i, j, k;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * n - (2 * i + 1); k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = n - 2; i >= 0; i--)
	{
		for (j = i; j > 0; j--)
		{
			printf(" ");
		}
		for (k = 2 * n - (2 * i + 1); k > 0; k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}