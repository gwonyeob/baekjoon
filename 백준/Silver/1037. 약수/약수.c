#include<stdio.h>
int main()
{
	int n = 0;
	int div = 0, max = 1, min = 1000001;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &div);
		max = div > max ? div : max;
		min = div < min ? div : min;
	}
	printf("%d", max * min);
	return 0;
}