#define _CRT_SECURE_NO_WARNINGS   // Visual Studio ke scanf warning ko silence karta hai
#include <stdio.h>

char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };

void printBoard() {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

int checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;
    return 0;
}

int main() {
    int move, row, col, turn;
    char player;

    printf("===== Tic Tac Toe =====\n");
    printf("Do players baari baari se khelenge (X aur O). Position 1-9 me se choose karo.\n");
    printBoard();

    for (turn = 0; turn < 9; turn++) {
        player = (turn % 2 == 0) ? 'X' : 'O';
        printf("Player %c, apni position daalo: ", player);
        scanf("%d", &move);

        if (move < 1 || move > 9) {
            printf("1 se 9 ke beech hi daalo, dobara try karo.\n");
            turn--;
            continue;
        }

        row = (move - 1) / 3;
        col = (move - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Ye jagah already bhari hai, dobara try karo.\n");
            turn--;
            continue;
        }

        board[row][col] = player;
        printBoard();

        if (checkWin()) {
            printf("Player %c jeet gaya!\n", player);
            return 0;
        }
    }

    printf("Match draw ho gaya!\n");
    return 0;
}