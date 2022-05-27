#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define SWAP(a,b) {int c=a; a=b; b=c;}

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    int* answer = (int*)malloc(sizeof(int) * 200);
    int cnt = 0;
    int i, flag;
    for (int i = 0; i < numbers_len; i++)
    {
        for (int j = i + 1; j < numbers_len; j++)
        {
            int tmp = numbers[i] + numbers[j];
            flag = 1;
            for (int k=0; k<cnt; k++)
            {
                if (answer[k] == tmp)
                    flag = 0;
            }
            if (flag==1)
                answer[cnt++] = tmp;
        }
    }
    for (int i=0; i< cnt; i++){
        for (int j=0; j< cnt-1-i; j++){
            if (answer[j]>answer[j+1]){
                SWAP(answer[j], answer[j+1]);
            }
        }
    }
    return answer;
}