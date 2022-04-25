#include<stdio.h>
#include<string.h>
//영어 대문자: 65~90 영어 소문자 97~122 차이:32 
int main()
{
	char word[100] = { 0 };
	int length = 0;
	scanf("%s", word, sizeof(word));
	length = strlen(word);
	for (int i = 0; i < length; i++)
	{
		if (word[i] >= 97 && word[i] <= 122)
		{
			word[i] -= 32;
		}
		else if (word[i] >= 65 && word[i] <= 90)
		{
			word[i] += 32;
		}
	}
	printf("%s", word);
	return 0;
}