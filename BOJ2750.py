#2022.01.04 03625
#BOJ2750
""" 
numSize = int(input())
numArr = [0] * numSize

for i in range(0, numSize) :
    numArr[i] = int(input())
    
numArr.sort()

for i in range(0, numSize) :
    print(numArr[i])
""" 

# 2023.03.01
# Lee Jongyoung <leejongyoung@icloud.com>
n = int(input()) # 입력받을 수의 개수
nums = sorted([int(input()) for _ in range(n)]) # 입력받은 수를 리스트로 저장하고 정렬

for num in nums:
    print(num) # 정렬된 수를 한 줄씩 출력
