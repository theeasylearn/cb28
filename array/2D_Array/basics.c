// int matrix[row][col] = {{elements of row1}, {elements of row2}, {elements of row3}, ... };

#include<stdio.h>
int main() {

    int matrix[4][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {1, 2, 3} };
    // syntax
    // dataType arr[No. of sub array ][no of elements];
    printf("%d \n", matrix[2][2]); /*
    printf("%d ", matrix[0][0]); // 1    
    printf("%d ", matrix[0][1]); // 1    
    printf("%d ", matrix[0][2]); // 1    
    printf("\n");

    printf("%d ", matrix[1][0]); // 4 
    printf("%d ", matrix[1][1]); // 5 
    printf("%d ", matrix[1][2]); // 6 
    printf("\n");

    printf("%d ", matrix[2][0]); // 4 
    printf("%d ", matrix[2][1]); // 5 
    printf("%d ", matrix[2][2]); // 6 
    printf("\n"); */

    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}