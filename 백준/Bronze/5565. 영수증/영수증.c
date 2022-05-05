#include <stdio.h>
int main() 
{
	int all, each;
	scanf("%d", &all);
	for (int i = 0; i < 9; i++) 
	{
		scanf("%d", &each);
		all -= each;
	}
	printf("%d", all);
	return 0;
}