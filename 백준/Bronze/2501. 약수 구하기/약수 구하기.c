#include<stdio.h>
int main()
{
	int i, num = 0;
	int k = 0;
	int count = 0;
	scanf("%d %d", &num, &k);
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			count++;
		if (count == k)
			break;
	}
	if (i <= num)
		printf("%d", i);
	else
		printf("0");
}