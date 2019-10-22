import numpy as np
Row1, Row2, Column = list(map(int, input().split()))
arr1 = []
arr2 = []
for i in range(Row1):
    arr1.append(np.array(list(map(int, input().split()))))
arr1 = np.array(arr1)
for i in range(Row2):
    arr2.append(np.array(list(map(int, input().split()))))
arr2 = np.array(arr2)
print (np.concatenate((arr1, arr2), axis = 0))
