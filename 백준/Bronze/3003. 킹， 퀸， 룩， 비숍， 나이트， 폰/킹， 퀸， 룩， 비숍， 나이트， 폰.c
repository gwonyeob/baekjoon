#include<stdio.h>
int main()
{
	int chess[6] = { 1, 1, 2, 2, 2, 8 };
	int i = 0, number = 0;
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &number);
		printf("%d ", chess[i] - number);
	}
	return 0;
}