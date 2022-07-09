fbi = []
for _ in range(5) :
  fbi.append(input())
  cnt = 0
for i in range(len(fbi)) :
  if 'FBI' in fbi[i] :
    print(i+1, end=' ')
    cnt = 1

if cnt == 0 :
  print('HE GOT AWAY!')