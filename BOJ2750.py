#2022.01.04 03625
#BOJ2750
numSize = int(input())
numArr = [0] * numSize

for i in range(0, numSize) :
    numArr[i] = int(input())
    
numArr.sort()

for i in range(0, numSize) :
    print(numArr[i])