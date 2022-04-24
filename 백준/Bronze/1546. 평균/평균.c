#include<stdio.h>
int main()
{
    int N, i;//N: 과목 수, i:for
    float score[1000] = { 0 }, max = 0, avg = 0;// score[]: 점수 배열
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &score[i]);
        if (score[i] > max)//배열안에서 최댓값 구하기
            max = score[i];
    }

    double sum = 0;
    for (i = 0; i < N; i++)
    {
        sum += score[i] / max * 100;
    }
    avg = sum / N;
    printf("%f", avg);
}