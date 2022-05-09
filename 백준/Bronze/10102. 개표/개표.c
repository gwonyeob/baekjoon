#include <stdio.h>
void vote()
{
    int n;
    scanf("%d", &n);
    int i;
    char op={0};
    int count[2] = { 0 };
    getchar();
    for (i = 0; i < n; i++)
    {
        scanf("%c", &op);
        if (op == 'A')
            count[0]++;
        else
            count[1]++;
    }
    if (count[0] > count[1])
        printf("A");
    else if (count[0] < count[1])
        printf("B");
    else
        printf("Tie");
}
int main()
{
    vote();
}