#include<stdio.h>
int main()
{
	int a, b, c, d, e; //입력받은 각각의 수
	int vn = 0;//검증 수
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	vn = (a * a + b * b + c * c + d * d + e * e) % 10;
	printf("%d", vn);
}