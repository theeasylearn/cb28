#include<stdio.h>
void main() {

    // * * * * *
    // * _ _ _ *
    // * _ _ _ *
    // * * * * *

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5) {
                printf("* ");
            }
            else {
                printf("1 ");
            }
        }
        printf("\n");
    }
        
    printf("\n");
    printf("\n");
    printf("\n");

    // 1 
    // 1 1
    // 1 0 1
    // 1 0 0 1
    // 1 0 0 0 1
    // 1 0 0 0 0 1
    // 1 1 1 1 1 1 1

    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == 1 || i == 7 || j == 1 || j == i) {
                printf("1 ");
            }
            else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}