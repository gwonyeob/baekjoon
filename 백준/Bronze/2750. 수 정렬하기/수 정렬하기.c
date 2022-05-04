#include<stdio.h>
int main()
{
	int n = 0;
	int num[1024] = { 0 };
	int i = 0, j = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (num[i] > num[j])
			{
				int tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", num[i]);
	}
	return 0;
}