#include<stdio.h>
int main()
{
	int n = 0;
	int plag; //소수 판별
	int number = 0; //숫자 넣을 곳
	int count = 0; //소수 개수
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &number);
		plag = 0;
		if (number == 1)
			continue;
		for (int i = 2; i < number; i++)
		{
			if (number % i == 0)
				plag = 1;
		}
		if (plag == 0)
			count++;
	}
	printf("%d", count);
	return 0;
}