n = int(input())
list = []
for i in range(0, 2*n):
    if i % 2 == 0:
        element = input()
        list.append(element)
    elif i % 2 != 0:
        num = float(input())
        list.append(num)
