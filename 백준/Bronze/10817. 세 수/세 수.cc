#include<stdio.h>
int main()
{
	int num[3] = { 0 }; //숫자 담을 배열
	int change = 0; //임시 변수
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < 3; i++) //오름차순 정렬
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (num[i] > num[j])
			{
				change = num[i];
				num[i] = num[j];
				num[j] = change;
			}
		}
	}
	printf("%d", num[1]); //2번째로 큰 값 정렬
	return 0;
}