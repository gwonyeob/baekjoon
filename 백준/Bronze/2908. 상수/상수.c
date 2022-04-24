#include<stdio.h> 
//첫번째->a,b,c 두번째 ->d, e, f 
//거꾸로 된 첫번째; first 거꾸로 된 두번째: second
//first와 second는 다른 세 자리 수
int main()
{
	int first, second, a, b, c, e, d, f;
	scanf("%1d%1d%1d %1d%1d%1d", &a, &b, &c, &d, &e, &f);
	first = 100 * c + 10 * b + a;
	second = 100 * f + 10 * e + d;
	if (first > second)
	{
		printf("%d", first);
	}
	else
	{
		printf("%d", second);
	}
	return 0;
}