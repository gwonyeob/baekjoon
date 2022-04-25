#include <stdio.h>
char arr[2];
int main()
{
    scanf("%s", arr);
    char str = arr[0];
    char left = arr[1];
    switch (str)
    {
    case 'A':
        switch (left)
        {
        case '+':
            printf("4.3\n");
            break;
            return 0;
        case '0':
            printf("4.0\n");
            break;
            return 0;
        case '-':
            printf("3.7\n");
            break;
            return 0;
        }
        break;
    case 'B':
        switch (left)
        {
        case '+':
            printf("3.3\n");
            break;
            return 0;
        case '0':
            printf("3.0\n");
            break;
            return 0;
        case '-':
            printf("2.7\n");
            break;
            return 0;
        }
        break;
    case 'C':
        switch (left)
        {
        case '+':
            printf("2.3\n");
            break;
            return 0;
        case '0':
            printf("2.0\n");
            break;
            return 0;
        case '-':
            printf("1.7\n");
            break;
            return 0;
        }
        break;
    case 'D':
        switch (left)
        {
        case '+':
            printf("1.3\n");
            break;
            return 0;
        case '0':
            printf("1.0\n");
            break;
            return 0;
        case '-':
            printf("0.7\n");
            break;
            return 0;
        }
        break;
    default:
        printf("0.0");
        break;
    }
    return 0;
}