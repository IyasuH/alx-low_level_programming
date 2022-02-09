#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid=[[]]):
    """
    returns the perimeter of the island described in grid
    args:
        grid is list of list of int
        0-water zone
        1-land zone
        cells connected horizonataly and vertically not diagonaly
    """
    peri = 0
    n = len(grid) - 1
    m = len(grid[n]) - 1
    for v in range(len(grid)):
        for h in range(len(grid[n-1])):
            if grid[0][h] == 0 and grid[n][h] == 0:
                if grid[v][0] == 0 and grid[v][m] == 0:
                    if ((grid[v][h] == 1 and grid[v][h+1] == 1)
                        or (grid[v][h] == 1 and grid[v][h-1] == 1)):
                        peri = peri + 4
    return(peri)
