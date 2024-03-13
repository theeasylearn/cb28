// print all even numbers between 1 to n 

#include<stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("\n ------------continue------------\n");
    for (int i = 1; i <= num; i++) {

        // for even number 
        if (i % 2 != 0) {
            continue ;
        }

        // for odd numbers 
        // if (i % 2 == 0) {
        //     continue ;
        // }

        // printf("temp \n");
        printf("%d ", i);
    }

    printf("\n ------------break------------\n");

    for (int i = 1; i <= 100; i++) {
        if (i == num) {
            break;
        }
        printf("%d ", i);
    
    } 


}

// i condition 
// 1   f 
// 2   t 
// 3   f 