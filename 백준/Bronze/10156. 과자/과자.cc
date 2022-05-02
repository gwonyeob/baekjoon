#include<stdio.h>
int main()
{
	int cost = 0, n = 0, m = 0;
	int sum = 0; //받아야할 돈
	scanf("%d %d %d", &cost, &n, &m);
	sum = cost * n - m;
	if (sum < 0)
		sum = 0;
	printf("%d", sum);
	return 0;
}