#include<stdio.h>
int main()
{
	int n = 0;
	int num[100] = { 0 };
	int v; //지정된 숫자 v
	int count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	scanf("%d", &v);
	for (int i = 0; i < n; i++)
	{
		if (v == num[i])
			count ++;
	}
	printf("%d", count);
	return 0;
}