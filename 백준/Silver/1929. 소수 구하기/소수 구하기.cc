#include<stdio.h>
int main()
{
	int number[1000001] = { 0 };
	int m, n;
	number[1] = 1;
	scanf("%d %d", &m, &n);
	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; i * j <= n; j++)
		{
			number[i * j] = 1;
		}
	}
	for (int i = m; i <= n; i++)
	{
		if (number[i] == 0)
			printf("%d\n", i);
	}
	return 0;
}
//에라토스테네스의 체 활용
//몫이 존재하여 소수가 아니라면 그 자리에 1을 채워놓고 배열을 돌려 0이라면 소수이므로 출력
