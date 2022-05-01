#include<stdio.h>
int main()
{
	long a, b, c;
	int bp = 0; //손익분기점
	scanf("%ld %ld %ld", &a, &b, &c);
	if (c - b <= 0)
	{
		bp = -1;
	}
	else
	{
		bp = a / (c - b);
		bp++;
	}
	printf("%d", bp);
}