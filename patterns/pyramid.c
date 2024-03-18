#include<stdio.h>
int main() {

    for (int i = 1; i <= 9; i++) {
        for (int j = 9; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            if (i == 1 || i == 9 || j == i || j == 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}