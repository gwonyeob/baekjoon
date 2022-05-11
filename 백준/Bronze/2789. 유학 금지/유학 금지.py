a="CAMBRIDGE"
arr=list(input())
for i in a:
    for j in range(len(arr)):
        if i==arr[j]:
            arr[j]=''
for i in arr:
    print(i, end='')
#같은 문자라면 공백 처리하고 출력랄때는 공백 날리고 출력