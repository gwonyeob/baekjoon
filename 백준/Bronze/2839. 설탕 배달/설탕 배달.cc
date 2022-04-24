#include<stdio.h>
int main()
{
	int sugar = 0; //설탕 
	int count = 0; //봉지
	scanf("%d", &sugar);
    while (1)
	{
		if (sugar % 5 == 0) //5의 배수일때
		{
			count += sugar / 5;
			printf("%d", count);
			break;
		}
		sugar = sugar - 3; //3의 배수
		count++;
		if (sugar<0)
		{
			printf("-1");
			break;
		}
	}
}