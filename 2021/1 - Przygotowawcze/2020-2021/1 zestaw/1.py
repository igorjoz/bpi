colsQuantity = int(input())
linesQuantity = int(input())
goRight = True
col = 0

for line in range(linesQuantity):
    if goRight:
        for col in range(colsQuantity):
            print(col, line)
            # print(col + 1, line + 1) # simulate 1 ... n lists
        goRight = False
    else:
        for col in range(colsQuantity - 1, -1, -1):
            print(col, line, "l")
            # print(col + 1, line + 1, "l") # simulate 1 ... n lists
        goRight = True
