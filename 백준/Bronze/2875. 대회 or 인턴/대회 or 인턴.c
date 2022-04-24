#include<stdio.h>
int main()
{
	int N, M, K;
	int max = 0;
	scanf("%d %d %d", &N, &M, &K);
	max = N / 2 < M ? N / 2 : M; //최대 팀 수
	K -= N + M - 3 * max; //팀을 이루고 남은 학생 수
	if (K > 0) //k가 0보다 클 때 처리
	{
		K--;
		max -= K / 3 + 1; //왜 그런지 이해 안됨
	}
	printf("%d", max);
	return 0;
}