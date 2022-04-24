#include<stdio.h>
int main()
{
	int day = 0;
	int car = 0;
	int count = 0; //위반한 자동차의 수
	scanf("%d", &day);
	day = day % 10;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &car);
		if (car == day)
			count++;
	}
	printf("%d", count);
}