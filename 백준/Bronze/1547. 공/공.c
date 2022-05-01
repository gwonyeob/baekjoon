#include<stdio.h>
int main() 
{
	int move=0;
	int i, j, temp = 0;
	int x, y, x1 = 0, y1 = 0;
	int ball[3] = { 1, 2, 3 }; //컵의 위치

	scanf("%d", &move);  // 입력한 값만큼 이동

	for (i = 0; i < move; i++) {
		scanf("%d %d", &x, &y);	 // 바꿔줄 컵의 위치 입력
		for (j = 0; j < 3; j++) 
		{
			if (ball[j] == x)  
				x1 = j;
			else if (ball[j] == y) 
				y1 = j;
		}
		temp = ball[x1];    
		ball[x1] = ball[y1];
		ball[y1] = temp;
	}
	printf("%d\n", ball[0]); 
	return 0;
}