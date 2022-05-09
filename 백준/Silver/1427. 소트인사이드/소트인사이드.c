#include<stdio.h>
#include<string.h>
int main()
{
	char num[11] = { 0 };
	int tmp;
	scanf("%s", num, sizeof(num));
	int len = strlen(num);
	for (int i = 0; i < len; i++)
	{
		for (int j = i; j < len; j++)
		{
			if (num[i] < num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%c", num[i]);
	}
}