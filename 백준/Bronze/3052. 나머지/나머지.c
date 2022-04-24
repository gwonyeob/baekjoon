#include<stdio.h>
int main()
{
	int num[10] = { 0 };
	int input = 0;//입력받을 숫자
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &input);
		num[i] = input % 42;
	}
	int count = 1;
	for (int i = 1; i < 10; i++)
	{
		int dup = 0;//중복 체크
		for (int j = 0; j < i; j++)
		{
			if (num[i] == num[j]) {
				dup = 1;//중복이 됨
				break;
			}
		}
		if (dup != 1) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}