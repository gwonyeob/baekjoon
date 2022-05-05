#include<stdio.h>
int main()
{
	int garo[51] = { 0 }; //가로
	int sero[51] = { 0 }; //세로
	char input[51][51] = {'\n',};  //입력받는 배열
	int n, m;
	int garo_count = 0;
	int sero_count = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", input[i], sizeof(input));
		getchar();
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (input[i][j] == 'X')
			{
				garo[i]++;
				sero[j]++;
			}
		}
	}
	for (int i = 0; i < n; i++)
		if (garo[i] == 0) //비어있다면 경비원++
			garo_count++;
	for (int i = 0; i < m; i++)
		if (sero[i] == 0) //비어있다면 경비원++
			sero_count++;
	if (garo_count>sero_count)
		printf("%d", garo_count);
	else
		printf("%d", sero_count);
	return 0;
}