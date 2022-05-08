#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int count = 1;
	while (1)
	{
		if ((count % 2) == 0)
			n--;
		else
			m--;
	    count++;
		if (m== 1 || n == 1)
			break;
	}
	printf("%d", count);
}