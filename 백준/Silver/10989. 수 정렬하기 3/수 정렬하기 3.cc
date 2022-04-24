#include<stdio.h>
int main()
{
	int n, input = 0;
	scanf("%d", &n);
	int count[10001];//count 배열 선언 및 초기화
	for (int i = 0; i < 10001; i++)
	{
		count[i] = 0;
	}
	for (int i = 0; i < n; i++)//count 입력
	{
		int input;
		scanf("%d", &input);
		count[input]++;
	}
	for (int i = 0; i < 10001; i++)//count 정렬 출력
	{
		for (int j = 0; j < count[i]; j++)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}