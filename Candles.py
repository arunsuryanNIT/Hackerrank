import math
n = int(input())
list = [int(i) for i in input().split()]
max = 0
for i in range (0, n):
    if max < list[i]:
        max = list[i]
count = 0
for i in range (0, n):
    if max == list[i]:
        count += 1
print(count)
