#include<stdio.h>
int main()
{
	int w[10] = { 0 };
	int k[10] = { 0 };
	int i, j;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &w[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &k[i]);
	}
	for (int i= 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (w[i] < w[j]) //내림차순 정렬
			{
				int num = w[i];
				w[i] = w[j];
				w[j] = num;
			}
			if (k[i] < k[j])
			{
				int num = k[i];
				k[i] = k[j];
				k[j] = num;
			}
		}
	}
	printf("%d %d", w[0] + w[1] + w[2], k[0] + k[1] + k[2]);
	return 0;
}