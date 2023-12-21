#!/usr/bin/python3
"""Defines Island perimeter module"""


def adjason(up, down, left, right):
    """the function returns the number of unit adjason with"""
    count = up + down + left + right
    return 4 - count


def island_perimeter(grid):
    """function returns island perimeter"""
    perimeter = 0
    for row in range(len(grid)):
        for j in range(len(grid[row])):
            if grid[row][j]:
                up = 0
                left = 0
                right = 0
                down = 0
                if row:
                    up = grid[row-1][j]
                if row != len(grid)-1:
                    down = grid[row+1][j]
                if j:
                    left = grid[row][j-1]
                if j != len(grid[row])-1:
                    right = grid[row][j+1]
                cnt = adjason(up, down, left, right)
                perimeter += cnt
    return perimeter
