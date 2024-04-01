nominator = denominator = 0

xs = [2006, 2007, 2008, 2009, 2010]
ys = [75, 67, 61, 68, 63]
n = len(xs)

nomSum1 = nomSum2 = nomSum3 = denSum1 = denSum2 = 0

for index in range(n):
    nomSum1 += xs[index] * ys[index]
    nomSum2 += ys[index]
    nomSum3 += xs[index]
    denSum1 += xs[index] * xs[index]
    denSum2 += xs[index]

nominator = n * nomSum1 - nomSum2 * nomSum3
denominator = n * denSum1 - denSum2 * denSum2
result = nominator / denominator

print(nomSum1, nomSum2, nomSum3)
print(denSum1, denSum2)
print(nominator, denominator)
print(result)
