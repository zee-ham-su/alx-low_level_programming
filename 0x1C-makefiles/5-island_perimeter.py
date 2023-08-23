#!/usr/bin/python3
""" functions that defines the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in
    the grid by counting edges.

    Parameters:
    grid (list[list[int]]): A 2D grid where 0 represents water
    and 1 represents land.

    Returns:
    int: The perimeter of the island.
    """
    border_count = 0
    for length in range(len(grid)):
        for width in range(len(grid[0])):
            if grid[length][width] == 1:
                border_count += 4
                if length > 0:
                    border_count -= 2 * grid[length - 1][width]
                if width > 0:
                    border_count -= 2 * grid[length][width - 1]

    return (border_count)
