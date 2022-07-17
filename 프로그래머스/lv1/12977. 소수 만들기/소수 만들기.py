def solution(nums):
    nums = sorted(nums)
    sums = []
    #0 1 2/ 1 2 3번쨰 숫자를 더함 -> 3중 for문
    for i in range(0, len(nums)-2):
        for j in range(i+1, len(nums)-1):
            for k in range(j+1, len(nums)):
                # xC3의 조합으로 세 수의 합을 구함
                sums.append(nums[i] + nums[j] + nums[k])    
    answer = len(sums)
    for num in sums:
        #약수의 개수는 최대 미지수의 2분의 1이므로 2부터 미지수/2의 숫자까지 소수 판별
        for i in range(2, num//2):
            if num % i == 0:
                answer -= 1
                break
    return answer
