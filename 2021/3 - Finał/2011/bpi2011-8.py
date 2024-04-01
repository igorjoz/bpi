def wrongDigitsExitProgram():
    print(False)
    exit(0)


TAB_SUDOKU = [
    [8, 3, 1, 7, 9, 5, 6, 2, 4],
    [4, 5, 6, 8, 1, 2, 7, 9, 3],
    [2, 7, 9, 3, 4, 6, 1, 5, 8],
    [3, 2, 7, 9, 8, 1, 5, 4, 6],
    [5, 9, 8, 2, 6, 4, 3, 7, 1],
    [1, 6, 4, 5, 3, 7, 2, 8, 9],
    [6, 4, 2, 1, 5, 8, 9, 3, 7],
    [7, 8, 3, 6, 2, 9, 4, 1, 5],
    [9, 1, 5, 4, 7, 3, 8, 6, 2],
]

n = len(TAB_SUDOKU[0])

# TASK: check if:
# each column has every 1 to 9 digit
# each row has every 1 to 9 digit
# each 3x3 square has every 1 to 9 digit

for i in range(n):

    # check rows
    hasDigit = [False] * 9
    for j in range(n):
        num = TAB_SUDOKU[i][j]
        if num > 9 or hasDigit[num - 1]:  # err: not a digit or err: two the same digits
            wrongDigitsExitProgram()
        if num != 0:
            hasDigit[num - 1] = True
        # print(num)
    # print("========")

    # check cols
    hasDigit = [False] * 9
    for j in range(n):
        num = TAB_SUDOKU[j][i]
        if num > 9 or hasDigit[num - 1]:  # err: not a digit or err: two the same digits
            wrongDigitsExitProgram()
        if num != 0:
            hasDigit[num - 1] = True
        # print(num)
    # print("========")

# check 3x3 squares
for startRowMpy in range(3):
    startRow = 3 * startRowMpy
    for startColMpy in range(3):
        startCol = 3 * startColMpy
        # print(startRow, startCol)
        hasDigit = [False] * 9
        for i in range(startRow, startRow + 3):
            for j in range(startCol, startCol + 3):
                num = TAB_SUDOKU[i][j]
                if num > 9 or hasDigit[num - 1]:  # err: not a digit or err: two the same digits
                    wrongDigitsExitProgram()
                if num != 0:
                    hasDigit[num - 1] = True


print(True)
