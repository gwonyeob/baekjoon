n = int(input())
arr= []
for i in range(n) : 
    arr.append(int(input()))
one_count = arr.count(1)
zero_count = arr.count(0)

if one_count > zero_count :
    print("Junhee is cute!")
else :
    print("Junhee is not cute!")