// 1 + 2 + 3 + ... + 10 = sum 

#include<stdio.h>
void main() {
    int sum = 0;
    int i = 1;

    // sum += i; // sum = sum + i // sum = 1
    // i++; // 2
    // sum += i; // sum = sum + i // sum = 3
    // i++; // 3
    // sum += i; // sum = sum + i // sum =6

    for (i = 1; i <= 10; i++) {
        sum += i; // sum = sum + i // sum = 1
        // printf("sum = %d \n", sum);
    }

    printf("sum = %d", sum);

}