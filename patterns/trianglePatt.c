#include<stdio.h>
void main() {

    // *
    // * *
    // * * * 
    // * * * *

/*
    printf("* ");
    printf("\n");
    
    printf("* ");
    printf("* ");
    printf("\n");
    
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("* ");
    printf("* ");
    printf("* ");
    printf("* ");
    printf("\n");

    printf("\n------------------\n");
*/
  
  
    int i, j;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n----------------------\n");

    // 1 
    // 1 2
    // 1 2 3 

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n----------------------\n");

    // 1
    // 1 2
    // 1 2 3
    for (i = 1; i <= 5; i++) { // row
        for (j = 1; j <= i; j++) { // col
            printf("%d ", j);
        }
        printf("\n");
    }


    printf("\n----------------------\n");

    // 1
    // 2 3 
    // 4 5 6

    int sum = 1;
    for (i = 1; i <= 5; i++) { // row
        for (j = 1; j <= i; j++) { // col
            printf("%.2d ", sum);
            sum++;
        }
        printf("\n");
    }


    printf("\n----------------------\n");

    // a 
    // 2 2 
    // c c c 
    // 4 4 4 4
    // e e e e e
    // 6 6 6 6 6 6

    char ch;
    for (i = 1; i <= 10; i++) { // row
        // printf("%d ", i);
        for (j = 1; j <= i; j++) { // col - elements
            if (i % 2 != 0) {
                printf("%c ", i + 96); 
            } else {
                printf("%d ", i );
            }
        }
        printf("\n");
    }

    printf("\n----------------------\n");

    // 02
    // 04 06
    // 08 10 12
    // 14 16 18 20

    sum = 0;
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (i = 1; i <= 4; i++) { // row
        // printf("%d ", i);
        for (j = 1; j <= i; j++) { // col - elements
            sum += num;
            printf("%.2d ", sum); 
        }
        printf("\n");
    }

    printf("\n\n-----------------------\n\n");
    // 1 
    // 1 1
    // 1 0 1
    // 1 0 0 1
    // 1 0 0 0 1
    // 1 0 0 0 0 1
    // 1 1 1 1 1 1 1

    for (i = 1; i <= 4; i++) { // row
        // printf("%d ", i);
        for (j = 1; j <= i; j++) { // col - elements
            
        }
        printf("\n");
    }


}