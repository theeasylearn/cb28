#include<stdio.h>


void hello() {

    printf("%d ", temp); // 1
    // printf("%d ", num);
    int num = 0;

    printf("%d ", num); // 0
    return;
}

int temp = 1;

int main() {
    printf("%d ", temp); // 1

    hello();

    // printf("%d ", num);
    // hello();
    // hello();
    // hello();
    // hello();
    // hello();

    // for (int i = 1; i <= 100; i++) {
    //     hello(i);
    // }

    // printf("%d ", i);
    return 0;
}