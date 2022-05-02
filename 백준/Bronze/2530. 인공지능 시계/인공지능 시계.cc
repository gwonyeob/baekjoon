#include <stdio.h>
int main() 
{
	int h=0, m=0, s=0;
	int time;
	int th = 0, tm = 0, ts = 0;
	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &time);
	if (time >= 3600) 
	{
		th += time / 3600;
		time = time % 3600;
	}
	if (time >= 60) 
	{
		tm += time / 60;
		time = time % 60;
	}
	ts = time;

	h += th;
	m += tm;
	s += ts;
	if (s >= 60) {
		s -= 60;
		m++;
	}
	if (m >= 60) {
		m -= 60;
		h++;
	}
	printf("%d %d %d", h % 24, m, s);
	return 0;
}