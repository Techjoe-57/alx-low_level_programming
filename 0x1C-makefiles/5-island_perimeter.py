#!/usr/bin/python3

"""
Program that creates the function island_perimeter
to calculate the perimeter of the island described 
in grid

"""

def island_perimeter(grid):

    """
Function that calculates the perimeter of the island described 
in grid


Args:
grid: a list of list of integers

Return:
    returns the perimeter of the island described in grid

"""

    length_row = len(grid)
    length_col = len(grid[0])

    perimeter = 0
    connections = 0

    # Iterate rows and columns to find and count connections
    for x in range(0, length_row):
        for y in range(0, length_col):

            # Update perimeter if there is a land
            if grid[x][y] == 1:
                perimeter +=4

                # Stop perimeter update
                if x != 0 and grid[x - 1][y] == 1:
                    connections += 1
                if y != 0 and grid[x][y - 1] == 1:
                    connections += 1
    
    # Return the island perimeter
    return perimeter - (connections * 2)
