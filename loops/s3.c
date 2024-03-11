// 3, 12, 48, ...

#include<stdio.h>
void main() {

    int num = 10;
    int prod = 3;

    // printf("%d ", prod);
    // prod *= 4; // prod = 12

    // printf("%d ", prod); // 12 
    
    // prod *= 4; // prod = 48 
    // printf("%d ", prod); // 48 ... 

    for (int i = 1 ; i <= num; i++) {
        printf("%d ", prod);
        prod *= 4; // prod = 12
    }



}