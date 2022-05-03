#include<stdio.h>
int main()
{
	char mbti[4][2] = { {'E','I'},{'S','N'},{'T', 'F'},{'J','P'} };
	char yg[5] = { 0 };
	scanf("%s", yg, sizeof(yg));
	for (int i = 0; i < 4; i++)
	{
		if (yg[i] == mbti[i][0])
			printf("%c", mbti[i][1]);
		else
			printf("%c", mbti[i][0]);
	}
	return 0;
}