#include <iostream>
using namespace std;

const int SIZE = 9;

void displayGrid(int grid[SIZE][SIZE]) {
    cout << "\nSolved Sudoku:\n\n";

    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            cout << grid[row][col] << " ";

            if ((col + 1) % 3 == 0)
                cout << " ";
        }

        cout << endl;

        if ((row + 1) % 3 == 0)
            cout << endl;
    }
}

bool isSafe(int grid[SIZE][SIZE], int row, int col, int num) {

    for (int x = 0; x < SIZE; x++) {
        if (grid[row][x] == num)
            return false;
    }

    for (int x = 0; x < SIZE; x++) {
        if (grid[x][col] == num)
            return false;
    }

    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[startRow + i][startCol + j] == num)
                return false;
        }
    }

    return true;
}

bool findEmptyCell(int grid[SIZE][SIZE], int &row, int &col) {

    for (row = 0; row < SIZE; row++) {
        for (col = 0; col < SIZE; col++) {

            if (grid[row][col] == 0)
                return true;
        }
    }

    return false;
}

bool solveSudoku(int grid[SIZE][SIZE]) {

    int row, col;

    if (!findEmptyCell(grid, row, col))
        return true;

    for (int num = 1; num <= 9; num++) {

        if (isSafe(grid, row, col, num)) {

            grid[row][col] = num;

            if (solveSudoku(grid))
                return true;

            grid[row][col] = 0;
        }
    }

    return false;
}

int main() {

    int grid[SIZE][SIZE] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},

        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},

        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    cout << "==============================\n";
    cout << "       SUDOKU SOLVER\n";
    cout << "==============================\n";

    cout << "\nOriginal Sudoku:\n\n";

    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            cout << grid[row][col] << " ";

            if ((col + 1) % 3 == 0)
                cout << " ";
        }

        cout << endl;

        if ((row + 1) % 3 == 0)
            cout << endl;
    }

    if (solveSudoku(grid)) {
        displayGrid(grid);
        cout << "Sudoku solved successfully using Backtracking Algorithm.\n";
    }
    else {
        cout << "\nNo solution exists for this Sudoku puzzle.\n";
    }

    return 0;
}
