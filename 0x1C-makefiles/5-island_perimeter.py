#!/usr/bin/python3
def island_perimeter(grid):
    len_1 = len(grid)
    len_2 = len(grid[0])
    land = 0
    neighbour = 0
    for i in range(len_1):
        for j in range(len_2):
            if grid[i][j] == 1:
                land += 1
                if i < len_1 - 1 and grid[i + 1][j] == 1:
                    neighbour += 1
                if j < len_2 - 1 and grid[i][j + 1] == 1:
                    neighbour += 1
    return land * 4 - 2 * neighbour
