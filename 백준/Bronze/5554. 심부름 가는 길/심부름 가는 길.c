#include<stdio.h>
int main()
{
	int sec; //각각 초
	int m = 0, s = 0; //최종 분, 초
	for (int i = 0; i < 4; i++)
	{
		scanf("%d", &sec);
		s += sec;
	}
	m = s/ 60;
	s = s % 60;
	printf("%d\n%d", m, s);
}