#include<stdio.h>
int main()
{
	int a, b ,c;
	int x;
	int arr[10] = { 0 };
	scanf("%d %d %d", &a, &b, &c);
	int result = a * b * c;
	while (result != 0)
	{
		x = result % 10;//현재 1의 자리수
		arr[x]++;
		result /= 10;//10으로 나눈 숫자가 다음 숫자로
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}