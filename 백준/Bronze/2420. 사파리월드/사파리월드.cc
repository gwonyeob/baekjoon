#include<stdio.h>
int main()
{
	long long n, m;
	scanf("%lld %lld", &n, &m);
	if (n > m)
		printf("%lld", n - m);
	else if (n < m)
		printf("%lld", m -n);
	else
		printf("0");
	return 0;
}