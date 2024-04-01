n = 10

arr = []

for i in range(n):
    line = []
    for j in range(n):
        line.append(0)
    arr.append(line)

for index in range(10):
    arr[index][index] = 1

row = 0
for index in range(n - 1, -1, -1):
    arr[row][index] = 1
    row += 1

for line in arr:
    print(line)
