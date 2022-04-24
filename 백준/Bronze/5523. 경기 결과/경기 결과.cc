#include<stdio.h>
int main()
{
	int X=0, Y=0, N=0;
	int i = 0, a = 0, b = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &X, &Y);
		if (X > Y)
		{
			a++;
		}
		else if (X < Y)
		{
			b++;
		}
	}
	printf("%d %d", a, b);
	return 0;
}