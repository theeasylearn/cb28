 
#include<stdio.h>
void main() {


// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
    for (int i = 1; i <= 4; i++) { // row 
        printf("%d \t", i);
        for (int j = 1; j <= 5; j++) { // columns, elements 
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\n--------------\n");

    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    for (int i = 1; i <= 5; i++) { // row 
        // printf("%d \t", i);
        for (int j = 1; j <= 5; j++) { // columns, elements 
            printf("%d ", j);
        }
        printf("\n");
    }
    
    printf("\n--------------\n");

    // 01 02 03 04
    // 05 06 07 08
    // 09 10 11 12
    // 13 14 15 16

    int k = 1;
    for (int i = 1; i <= 4; i++) { // row 
        
        for (int j = 1; j <= 4; j++) { // columns, elements 
            printf("%c ", k + 96);
            k += 2;
        }
        printf("\n");
    }

}