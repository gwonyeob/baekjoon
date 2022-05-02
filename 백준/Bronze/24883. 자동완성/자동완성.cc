#include<stdio.h>
int main()
{
	char ap;
	scanf("%c", &ap);
	if (ap == 'n' || ap == 'N')
	{
		printf("Naver D2");
	}
	else
	{
		printf("Naver Whale");
	}
	return 0;
}