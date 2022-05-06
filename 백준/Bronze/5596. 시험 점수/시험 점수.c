#include<stdio.h>
int main()
{
	int num = 0;
	int min = 0;
	int man = 0;
	for (int i = 0; i < 4; i++)
	{
		scanf("%d ", &num);
		min += num;
	}
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &num);
		man += num;
	}
	if (min >= man)
		printf("%d", min);
	else
		printf("%d", man);
}