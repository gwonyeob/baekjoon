#include<stdio.h>
int main()
{
	int input[8] = { 0 };
	int ac = 0, ds = 0; //ac판별 ds판별
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &input[i]);
		if (i + 1 == input[i])
			ac++;
		else if (8 - i == input[i])
			ds++;
	}
	if (ac == 8)
		printf("ascending");
	else if (ds == 8)
		printf("descending");
	else
		printf("mixed");
	return 0;
}