def solution(N, stages):                                                                         
    answer = []
    fail = [-1]
    Rate = [-1]
    for i in range(1, N+2):
        fail.append(stages.count(i))
        
    for i in range(1, N+1):
        if sum(fail[i:]) != 0:
            Rate.append(fail[i]/sum(fail[i:]))
        else:
            Rate.append(0)
        
    for i in range(1, N+1):
        if max(Rate) >= 0:
            answer.append(Rate.index(max(Rate)))
            Rate[Rate.index(max(Rate))] = -1

    return answer