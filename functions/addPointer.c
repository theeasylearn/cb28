#include<stdio.h>

void changeValue(int *num) {
    *num += 10;
    // printf("num line 5 = %d ", num);
}

int main() {

    int num = 2;
    printf("Before calling = %d \n", num); // 2
    // changeValue(num); // pass by value 
    changeValue(&num); // pass by reference 
    printf("After calling = %d \n", num); // 12

    return 0;
}