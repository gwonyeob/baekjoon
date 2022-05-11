t = int(input())
for i in range(t):
    y_s=0
    k_s=0
    for j in range(9):
        y, k = map(int,input().split())
        y_s+=y
        k_s+=k
    if y_s>k_s:
        print("Yonsei")
    elif y_s<k_s:
        print("Korea")
    else:
        print("Draw")
