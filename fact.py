num = int(input())
fact = 1
for i in range(1, num + 1):
    fact = fact * i
if num == 0:
    print("1")
else:
    print(fact)