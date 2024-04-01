n = int(input())

sums = [1]
base = 2

for i in range(n):
    sums.append(base + sums[i])
    base += 1

print(sums)
