#include<stdio.h>
int main()
{
	int max = -99999999;
	int a, b = 0; //a: 내린 사람, b: 탄 사람
	int sum = 0; //기차에 탄 사람
	for (int i = 0; i < 4; i++)
	{
		scanf("%d %d", &a, &b);
		sum -= a;
		sum += b;
		if (sum > max)
			max = sum;
	}
	printf("%d", max);
	return 0;
}