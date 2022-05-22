#include <stdio.h>
int find_dn(int n);
int main()
{
    int num;
    scanf("%d", &num); 
    for(int i=1; i<=num; i++)
    {
        if(find_dn(i) == num)
        {
            printf("%d\n", i);
            break;
        }
        if(i==num)
            printf("0");
    }
}
 
int find_dn(int n)
{
    int dn = n;
    while(n>0)
    {
        dn = dn + n%10;
        n = n/10;
    }
    return dn;
}