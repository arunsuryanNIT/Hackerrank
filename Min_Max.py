list = [int(i) for i in input().split()]
sum = 0
min = 0
max = 0
highest = 0
lowest = 0
for i in range(0, 5):
    sum = sum + list[i]
for i in range(0, 5):
    max = sum - list[i]
    if max > highest:
        highest = max
lowest = sum
for i in range(0, 5):
    min = sum - list[i]
    if min < lowest:
        lowest = min
print(lowest, highest)
