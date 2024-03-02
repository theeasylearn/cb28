// 2, 4 ,6 ,8 10, 12 ... 

#include<stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // check 
    // int modulo = num % 2;

    // if (num % 2 == 0) {
    //     printf("Even number ");
    // }

    // if (num % 2 != 0) {
    //     printf("Odd number ");
    // }

    if (num == 0) {
        printf("Zero is neither negative nor positve ");
    }  
    else if (num % 2 == 0) {
        printf("Even number \n");
        // printf("%d ", num % 2);
    }
    else if (num % 2 != 0) 
    {
        printf("Odd number ");
    }
      
    else {
        printf("invalid ");
    }

    // printf("\n %d ", 'a');
    // printf("\n %d ", num);
}