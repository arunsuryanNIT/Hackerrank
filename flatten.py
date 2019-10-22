import numpy as np 
m, n = list(map(int, input().split()))
arr = []
for i in range(m):
    arr.append(np.array(list(map(int, input().split()))))
arr = np.array(arr)
print(arr.transpose())
print(arr.flatten())