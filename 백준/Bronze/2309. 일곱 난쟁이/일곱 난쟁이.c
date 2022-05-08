#include<stdio.h>
int main()
{
	int nan[10] = { 0 }; //아홉 난쟁이
	int sum = 0; //아홉 난쟁이 합
	int tmp = 0;
	int i, j;
	int x=0, y=0; //가짜 난쟁이
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &nan[i]);
		sum += nan[i];
	}
	sum -= 100; //가짜 난쟁이들의 합
	for (int i = 0; i < 8; i++) //오름차순 정렬
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (nan[i] > nan[j])
			{
				tmp= nan[i];
				nan[i] = nan[j];
				nan[j] = tmp;
			}
		}
	}
	for (int i = 0; i < 8; i++) //가짜 난쟁이 찾기
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (nan[i] + nan[j] == sum)
			{
				x = nan[i];
				y = nan[j];
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		if (nan[i] == x || nan[i] == y)
			continue;
		printf("%d\n", nan[i]);
	}
}