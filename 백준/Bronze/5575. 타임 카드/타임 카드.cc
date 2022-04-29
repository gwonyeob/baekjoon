#include <stdio.h>
int main()
{
	int h1, m1, s1, h2, m2, s2;
	int T, t1, t2;
	int a[3], b[3], c[3];

	for (int i = 0; i < 3; i++) {
		scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);

		t1 = h1 * 3600 + m1 * 60 + s1;
		t2 = h2 * 3600 + m2 * 60 + s2;
		T = t2 - t1;

		a[i] = T / 60 / 60 % 24;
		b[i] = T / 60 % 60;
		c[i] = T % 60;
	}
	printf("%d %d %d\n%d %d %d\n%d %d %d\n", a[0], b[0], c[0], a[1], b[1], c[1], a[2], b[2], c[2]);
}