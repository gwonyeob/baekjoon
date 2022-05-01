#include<stdio.h> //수 뒤집기
int main()
{
	int num = 0;
	while (1)
	{
		scanf("%d", &num);
		if (num == 0)
			break;
		int reverse = 0; //뒤집은 숫자
		int org = num; //원래 숫자
		while (num > 0)
		{
			reverse *= 10;
			reverse += (num % 10);
			num /= 10;
		}
		if (org == reverse)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
