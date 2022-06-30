n = int(input())
for _ in range(n):  
    floor = int(input())
    num = int(input())  
    f0 = [x for x in range(1, num+1)]  # 0층 리스트
    for k in range(floor):  # 층 수 만큼 반복
        for i in range(1, num):  
            f0[i] += f0[i-1]  
    print(f0[-1])  