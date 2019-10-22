T = int(input())
while(T != 0):
    n, m = list(map(int, input().split()))
    if m >= n:
        print("YES", n)
    elif n > m:
        print("YES", m)
    else:
        print("NO")
    T = T - 1
