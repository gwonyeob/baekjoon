#include<stdio.h>
int main()
{
	int sum;
	int n, m;
	int best = 0; //가장 m에 가까운 숫자
	scanf("%d %d", &n, &m);
	int card[111] = { 0 };
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &card[i]);
	}
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = card[i] + card[j] + card[k];
				if (sum <= m)
				{
					if (sum > best)
						best = sum;
				}
			}
		}
	}
	printf("%d", best);
}