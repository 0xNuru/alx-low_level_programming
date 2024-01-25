#!/usr/bin/python3
"""
This module contains a function that
returns the perimeter of the island described in grid

grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is one island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
"""


def island_perimeter(grid):
    """Perimeter of Island"""
    perimeter = 0
    gl = []
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            gl.append(grid[i][j])
    for i in range(len(gl)):
        if i < len(gl) - 1 and i > 0:
            if gl[i] == 0 and gl[i + 1] == 1 or gl[i] == 0 and gl[i - 1] == 1:
                perimeter += 1
    if perimeter % 2 == 0:
        perimeter *= 2
    else:
        perimeter = (perimeter * 2) - 1
    return perimeter
