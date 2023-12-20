#!/usr/bin/python3
"""an island perimeter module"""

def adjason(up, down, left, right):
    """returns the number of unit adjason with"""
    count = up + down + left + right
    return 4 - count

def island_perimeter(grid):
"""returns the perimeter of the island"""
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
                cent = adjason(up, down, left, right)
                perimeter += cent
   return perimeter
