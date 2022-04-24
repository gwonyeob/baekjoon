#include<stdio.h>
int main()
{
	int n;
	int sum = 0;
	char arr[100];
	scanf("%d", &n);
	scanf("%s", &arr);
	for (int i = 0; i < n; i++)
	{
		sum += arr[i] - '0';
	}
	printf("%d", sum);

}