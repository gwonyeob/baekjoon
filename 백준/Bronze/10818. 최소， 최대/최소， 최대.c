#include<stdio.h>//num: 정수, a:배열 안의 무작위 숫자?
//a를 num번 출력하고 if문으로 무한 비교하여 최대, 최소 구함
int main()
{
	int num;
	scanf("%d", &num);
	int min = 1000001, max = -1000001;
	while (num--)
	{
		int a;
		scanf("%d", &a);
		if (a <min) min = a;
		if (a > max) max = a;
	}
	printf("%d %d\n", min, max);
	return 0;
}