#!/usr/bin/python3
"""Defines a function for calculating the perimeter of an island."""

def island_perimeter(grid):
    """Calculate the perimeter of an island.

    Given a grid where 0 represents water and 1 represents land,
    this function calculates the perimeter of the island defined in the grid.

    Args:
        grid (list): A list of lists of integers representing an island.

    Returns:
        The perimeter of the island defined in the input grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
