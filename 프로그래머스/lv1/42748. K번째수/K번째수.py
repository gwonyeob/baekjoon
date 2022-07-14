def solution(array, commands):
    answer = []
    for arr in commands:
        testcase = array[arr[0] - 1 : arr[1]]
        answer.append(sorted(testcase)[arr[2] - 1])
    return answer