// n! = n * (n - 1) * (n -2 ) *... * 1

// 5! = 5 *4 * 3 * 2 * 1 

// 4! = 4 * 3 * 2 * 1 = 24 
// 5! = 1 * 2 * 3 * 4 * 5

// 1 * 2 * 3 * ... * 10 = prod

#include<stdio.h>
void main() {
    
    int prod = 1;
    int i = 1;
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        prod = i * prod;
        // printf("%d \n", prod);
    }
    printf("%d! = %d \n", num, prod);

}