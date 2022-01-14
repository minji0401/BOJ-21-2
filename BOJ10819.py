#2022.01.14 03625
#BOJ10819
import itertools

result = 0
N = int(input())
A = list(map(int, input().split()))

A.sort()
ASet = list(itertools.permutations(A, N))

for i in range(len(ASet)):
    tmp = 0
    for j in range(0, N - 1):
        tmp += abs(ASet[i][j] - ASet[i][j + 1])
        
    if tmp > result:
        result = tmp
        
print(result)