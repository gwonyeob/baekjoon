#include<stdio.h>
int main()
{
	int A, I;// A:곡의 개수, I: 평균값
	scanf("%d %d", &A, &I);
	printf("%d", A * (I - 1) + 1);
	return 0;
}