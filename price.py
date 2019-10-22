n, k = list(map(int, input().split()))
List = [int (i) for i in input().split()]
sum = 0
for i in range (0, n):
    sum = int(sum) + List[i]
brian = int(input())
remain = brian - ((sum - List[k]) / 2)
if remain != 0:
    print(int(remain))
else:
    print("Bon Appetit")