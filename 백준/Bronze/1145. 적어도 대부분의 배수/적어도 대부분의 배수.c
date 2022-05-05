#include<stdio.h>
int main()
{
	int num[6] = { 0 };
	int count = 0;
	int i, j;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int  j= 1;; j++) //무한반복문
	{
		for (int i = 0; i < 5; i++)
		{
			if (j%num[i] == 0)
				count++;
		}
		if (count >= 3)
		{
			printf("%d", j);
			break;
		}
		else
			count = 0;
	}
	return 0;
}