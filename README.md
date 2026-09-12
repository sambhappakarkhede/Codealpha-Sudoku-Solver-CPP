# Sudoku Solver in C++

## Task 3 - Sudoku Solver

This project is a C++ based Sudoku Solver that solves a standard 9x9 Sudoku puzzle using the Backtracking Algorithm.

## Features

- Represents the Sudoku grid as a 2D array.
- Checks rows before placing a number.
- Checks columns before placing a number.
- Checks 3x3 subgrids before placing a number.
- Uses recursion and backtracking.
- Displays the solved Sudoku puzzle.
- Displays a message if no solution exists.

## Algorithm

1. Find an empty cell in the Sudoku grid.
2. Try numbers from 1 to 9.
3. Check whether the number is valid in the selected row.
4. Check whether the number is valid in the selected column.
5. Check whether the number is valid in the 3x3 subgrid.
6. If the number is valid, place it in the cell.
7. Recursively solve the remaining cells.
8. If the solution is not possible, remove the number and backtrack.
9. Continue until the Sudoku is completely solved.

## Technology Used

- C++
- 2D Array
- Recursion
- Backtracking Algorithm

## Sample Output

Solved Sudoku:

5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7

8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6

9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9

Sudoku solved successfully using Backtracking Algorithm.

## Project Type

C++ Programming Task - Task 3
