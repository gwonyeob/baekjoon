#include<stdio.h>
#include<string.h>
int main()
{
	int arr[26]={0}; //등장하는 위치 배열
	char s[101] = { 0 }; //단어
	scanf("%s", s, sizeof(s));
	for (int i = 0; i < 26; i++)
		arr[i] = -1;
	//포함되어 있지 않은 경우 -1 출력
	for (int i = 97; i < 123; i++)//영어 소문자 아스키 코드
	{
		for (int j = 0; j < strlen(s); j++)
		{
			if (s[j] == i)
			{
				arr[s[j] - 'a'] = j;
				break;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
/*arr[s[j]]-'a']a의 아스키 코드값: 97만큼 빼주기*/