computedValues = []

for num in range(1_000, 10_000):
    print(num)
    digits = []
    for digit in str(num):
        digits.append(int(digit))
        print(num, sum(digits), num / sum(digits))
        computedValues.append(num / sum(digits))

print("min:", min(computedValues))
print("max:", max(computedValues))
