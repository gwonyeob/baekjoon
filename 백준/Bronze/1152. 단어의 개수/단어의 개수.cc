#include<stdio.h>
#include<string.h>//문자열의 길이
int main()
{
	char sentence[1000000]={0};
	int i=0, length = 0, count = 0;
	scanf("%[^\n]s", &sentence, sizeof(sentence));
	length = strlen(sentence);
	if (length == 1)//문자열이 하나만 입력
	{
		if (sentence[0] == ' ')//공백이 입력되었을 때
		{
			printf("0");
			return 0;
		}
	}
	for (i = 1; i < length - 1; i++)
	{
		if (sentence[i] == ' ')
		{
			count++;
		}
	}
	printf("%d", count + 1);
	return 0;

}