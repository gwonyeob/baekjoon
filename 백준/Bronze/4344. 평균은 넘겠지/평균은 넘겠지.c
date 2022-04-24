#include<stdio.h>
int main()
{
	int n=0, c=0;//테스트 케이스:c, 학생수 : n
	scanf("%d", &c);
	while(c--)
	{
		scanf("%d", &n);
		int sum=0;
		double avg=0.00;
		int score[1000];//점수 받을 곳 
		for(int i=0; i<n; i++)
		{
			scanf("%d", &score[i]);
			sum+=score[i];
		}
		avg= (double)sum/n;
        int count=0;//평균보다 높은 사람 수
        for(int i=0; i<n; i++)
        {
            if(avg<score[i])
                count++;
        }
        printf("%0.3f%%\n", (double)count/n*100);
        
	}
	return 0;
}
