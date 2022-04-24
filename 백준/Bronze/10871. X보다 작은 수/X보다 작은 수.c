#include<stdio.h>//배열: array, 기준 숫자: num, for->i, 배열 크기: count
int main()
{
    int num, count;
    int array[10000];
    scanf("%d %d", &count, &num);
    for(int i=1; i<=count; i++)
    {
        scanf("%d", &array[i]);
        if(array[i]<num)
            printf("%d ", array[i]);
    }
    return 0;
        
}