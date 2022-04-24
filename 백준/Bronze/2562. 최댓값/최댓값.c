#include<stdio.h>//number:주어진 자연수 target: 몇번째인지
int main()
{
	int number, target, i;
	int max = 0;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &number);
		if (max < number)
		{
			max = number;
			target = i + 1;
		}
	}
	printf("%d\n%d", max, target);
	return 0;
}