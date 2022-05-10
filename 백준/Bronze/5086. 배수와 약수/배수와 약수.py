while True:
    a, b = map(int, input().split())
    if a == 0 and b == 0:
        break
    if b % a == 0: #약수
        print('factor')
    elif a % b == 0: #배수
        print('multiple')
    else:
        print('neither')