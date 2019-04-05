#!/usr/bin/env python3

holes = [(0,3), (5, 4), (3, 7)]

def DisplayBoard(board):
    print(' ' * len(board))
    for i in board:
        j = 0
        while (j < i):
            print('_', end=' ')
            j += 1
        print('x', end=' ')
        j += 1
        while (j < len(board)):
            print('_', end=' ')
            j += 1
        print()
    # print('-' * len(board))

def valid(col_placement):
    r = len(col_placement) - 1;
    for i in range(r):
        diff = abs(col_placement[i] - col_placement[r])
        if ((diff == 0) or diff == (r-i)):
            return False
    return True

def queens(n, row, col_placement, count):
    if row == n:
        DisplayBoard(col_placement)
        return 1
    else:
        for col in range(n):
            # print(col_placement)
            col_placement.append(col)
            if (valid(col_placement)):
                queens(n, row+1, col_placement, count)
            col_placement.pop()

count = 0
queens(8, 0, [], count)
print(count)
