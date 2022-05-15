#include <stdio.h>
int main() 
{
    int input[3]={0};
    int min, index, tmp;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &input[i]);
    }
    for (int j = 0; j < 3; j++) 
    {
        min = 1000001;
        for (int k = j; k < 3; k++) 
        {
            if (input[k] < min) 
            {
                min = input[k];
                index = k;
            }
        }
        tmp = input[j];
        input[j] = input[index];
        input[index] = tmp;
    }
    for (int i = 0; i < 3; i++) 
    {
        printf("%d ", input[i]);
    }
}