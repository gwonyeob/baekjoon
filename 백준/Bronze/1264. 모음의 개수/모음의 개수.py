string = input()
vowel = 'AaEeIiOoUu' #모음 리스트

while string != '#':
    answer = 0
    for i in string:
        if i in vowel:
            answer += 1
    print(answer)
    string = input()
    