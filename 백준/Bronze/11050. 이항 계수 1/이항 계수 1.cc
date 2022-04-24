#include<stdio.h>
int main()
{
	int n, k;
	int bn = 1; //이항 계수
	scanf("%d %d", &n, &k);
	for (int i = n; i >n - k; i--)
	{
		bn *= i;
	}
	for (int i = 1; i <= k; i++)
	{
		bn /= i;
	}
	printf("%d", bn);
}