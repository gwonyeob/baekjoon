#include<stdio.h>
#include<string.h>
int main()
{
	char word[101] = { 0 };
	int count[26] = { 0 }; //알파벳이 나온 횟수
	int len = 0; //단어 길이
	scanf("%s", word, sizeof(word));
	len = strlen(word);
	for (int i = 0; i < len; i++)
	{
		count[word[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", count[i]);
	}
	return 0;
}
//a가 나온 횟수->0에 저장, z가 나온 횟수-> 25에 저장