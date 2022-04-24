#include<stdio.h>
int main()
{
    int n = 0;
    int prize[1000]; //계산값 담을 곳
    int x, y, z;
    int max = 0; // 세 수 중 가장 큰 수
    int big = 0; //가장 큰 상금
    int i = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        if (x == y && x == z && y == z)
        {
            prize[i] = 10000 + 1000 * x;
        }
        else if (x == y || x == z)
        {
            prize[i] = 1000 + x * 100;
        }
        else if (y == z)
        {
            prize[i] = 1000 + y * 100;
        }
        else
        {
            max = x > y ? x : y;
            max = max > z ? max : z;
            prize[i] = max * 100;
        }
        if (big < prize[i])
        {
            big = prize[i];
        }
        
    }
    printf("%d", big);
    return 0;

}
