n = int(input())
list = []
for i in range(0, n):
    element = int(input())
    list.append(element)
list.sort()
for i in range(0, n):
    print(list[i])
