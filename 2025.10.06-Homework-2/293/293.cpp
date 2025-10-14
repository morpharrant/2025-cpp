#include <cstdio>
#include <cstdlib>

int main(int argc, char **argv)
{
    char x1 = ' ';
    char y1 = ' ';
    char x2 = ' ';
    char y2 = ' ';
    int move = 0;
    scanf(" %c%c %c%c", &x1, &y1, &x2, &y2);

    if (((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) == 5) {
        printf("Knight\n");
        return 0;
    }

    if (x1 == x2 || y1 == y2) {
        printf("Rook\n");
        move = 1;
    }

    if (((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) < 3) {
        printf("King\n");
        move = 1;
    }

    if (abs(x1 - x2) == abs(y1 - y2)) {
        printf("Bishop\n");
        move = 1;
    }

    if ((abs(x1 - x2) == abs(y1 - y2)) || (x1 == x2 || y1 == y2)) {
        printf("Queen\n");
        move = 1;
    }

    if (((y2 == '4' && y1 == '2') || (y2 - y1 == 1)) && x1 == x2) {
        printf("Pawn\n");
        move = 1;
    }

    if (move == 0) {
        printf("Nobody\n");
    }

    return 0;
}