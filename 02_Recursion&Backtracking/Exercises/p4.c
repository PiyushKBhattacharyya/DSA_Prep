/*
N-Queens Problem
Find all possible ways to place N queens on an N×N chessboard so that no two queens threaten each other.
*/

#include <stdio.h>
#include <stdbool.h>

#define MAX 20

int board[MAX][MAX];
int N;

// Function to print the board
void printSolution() {
    static int count = 1;
    printf("Solution %d:\n", count++);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf(" %c ", board[i][j] ? 'Q' : '.');
        }
        printf("\n");
    }
    printf("\n");
}

// Function to check if a queen can be placed on board[row][col]
bool isSafe(int row, int col) {
    int i, j;

    // Check this row on left side
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;

    // Check upper diagonal on left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // Check lower diagonal on left side
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

// Recursive function to solve N-Queens problem
bool solveNQUtil(int col) {
    // If all queens are placed, then return true
    if (col >= N) {
        printSolution();
        return true;
    }

    bool res = false;
    for (int i = 0; i < N; i++) {
        if (isSafe(i, col)) {
            // Place this queen in board[i][col]
            board[i][col] = 1;

            // Recur to place rest of the queens
            res = solveNQUtil(col + 1) || res;

            // If placing queen in board[i][col] doesn't lead to a solution, 
            // then remove queen from board[i][col] (Backtrack)
            board[i][col] = 0;
        }
    }

    return res;
}

int main() {
    printf("Enter the number of queens (N): ");
    scanf("%d", &N);

    // Initialize board with 0
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            board[i][j] = 0;

    if (!solveNQUtil(0)) {
        printf("Solution does not exist\n");
    }

    return 0;
}
