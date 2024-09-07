#include <stdio.h>

void print_board(int board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void puzzle_game() {
    int board[3][3] = {
        {3, 1, 2},
        {6, 5, 4},
        {8, 7, 0}
    };

    int moves = 0;

    while (1) {
        print_board(board);

        int row, col;
        printf("Enter row and column to move (0-2): ");
        scanf("%d %d", &row, &col);

        if (row < 0 || row > 2 || col < 0 || col > 2) {
            printf("Invalid move. Try again.\n");
            continue;
        }

        int target = board[row][col];
        if (target == 0) {
            printf("You can't move the empty space. Try again.\n");
            continue;
        }

        int dir;
        printf("Enter direction (0: up, 1: down, 2: left, 3: right): ");
        scanf("%d", &dir);

        int new_row = row, new_col = col;
        switch (dir) {
            case 0:
                new_row--;
                break;
            case 1:
                new_row++;
                break;
            case 2:
                new_col--;
                break;
            case 3:
                new_col++;
                break;
        }

        if (new_row < 0 || new_row > 2 || new_col < 0 || new_col > 2) {
            printf("Invalid move. Try again.\n");
            continue;
        }

        swap(&board[row][col], &board[new_row][new_col]);

        moves++;

        if (board[0][0] == 1 && board[0][1] == 2 && board[0][2] == 3 &&
            board[1][0] == 4 && board[1][1] == 5 && board[1][2] == 6 &&
            board[2][0] == 7 && board[2][1] == 8 && board[2][2] == 0) {
            printf("Congratulations! You solved the puzzle in %d moves.\n", moves);
            break;
        }
    }
}

int main() {
    puzzle_game();
    return 0;
}
