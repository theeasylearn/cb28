// 1 * 2 * 3 * ... * 10 = prod

#include<stdio.h>
void main() {
    
    int prod = 1;
    int i = 1;

    for (i = 1; i <= 10; i++) {
        prod = i * prod;
        // printf("%d \n", prod);
    }

    printf("%d ", prod);
}