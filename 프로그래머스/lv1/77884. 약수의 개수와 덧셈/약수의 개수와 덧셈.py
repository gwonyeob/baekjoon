def solution(left, right):
    answer = 0
    cnt = 0
    num = [i for i in range(left,right+1)]
    for j in num:
        for k in range(1,j+1):
            if j%k == 0: cnt += 1
        if cnt%2 == 0:
            answer += j
            cnt = 0
        else:
            answer -= j
            cnt = 0
    return answer
