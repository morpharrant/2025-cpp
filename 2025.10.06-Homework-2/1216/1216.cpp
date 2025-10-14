#include <cstdio>

int main() {
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;
    int temp = 0;

    scanf("%d %d %d\n%d %d %d", &a1, &b1, &c1, &a2, &b2, &c2);

    // сортировка первой коробки
    if (a1 > b1) {
        temp = a1;
        a1 = b1;
        b1 = temp;
    }
    if (b1 > c1) {
        temp = b1;
        b1 = c1;
        c1 = temp;
    }
    if (a1 > b1) {
        temp = a1;
        a1 = b1;
        b1 = temp;
    }
    if (a2 > b2) {
        temp = a2;
        a2 = b2;
        b2 = temp;
    }
    if (b2 > c2) {
        temp = b2;
        b2 = c2;
        c2 = temp;
    }
    if (a2 > b2) {
        temp = a2;
        a2 = b2;
        b2 = temp;
    }
    if (a1 == a2 && b1 == b2 && c1 == c2) {
        printf("Boxes are equal");
    }
    else if (a1 <= a2 && b1 <= b2 && c1 <= c2) {
        printf("The first box is smaller than the second one");
    }
    else if (a1 >= a2 && b1 >= b2 && c1 >= c2) {
        printf("The first box is larger than the second one");
    }
    else {
        printf("Boxes are incomparable");
    }

    return 0;
}