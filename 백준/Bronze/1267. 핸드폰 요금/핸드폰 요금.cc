#include<stdio.h>
int main()
{
	int y = 0, m = 0;
	int n = 0;
	int input[20] = { 0 }; //통화량
	scanf("%d", &n);
	for (int i = 0; i < n; i++) //y,m 각각 구하기
	{
		scanf("%d", &input[i]);
		y += input[i] / 30 + 1; 
		m += input[i] / 60 + 1;
	}
	y*= 10;
	m *= 15;
	if (y == m)
	{
		printf("Y M %d", y);
	}
	else if (y > m)
	{
		printf("M %d", m);
	}
	else
		printf("Y %d", y);
	return 0;
	//더 싼 요금제를 찾아야함
}