#include<stdio.h>
int main()
{
	long a, b, c;
	while (1)
	{
		scanf("%ld %ld %ld", &a, &b, &c);
		long num1, num2, num3;
		if (a == 0 && b == 0 && c == 0)
			break;
		num1 = a * a;
		num2 = b * b;
		num3 = c * c;
		if (num1 + num2 == num3 || num2 + num3 == num1 || num1 + num3 == num2)
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}
//직각삼각형의 조건 이용
//while(1)로 무한 루프를 돌리고 0 0 0이 나오면 break