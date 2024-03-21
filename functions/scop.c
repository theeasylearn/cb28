#include<stdio.h>

int temp = 1;

void hello(float num1, int num2, int num3) {

    printf("%d ", temp); // 1
    // printf("%d ", num);
    int num = 0;

    printf("%d ", num1); // 0
    printf("%d ", num2); // 0
    printf("%d ", num3); // 0
    printf("\n");
    return;
}


int main() {
    printf("%d ", temp); // 1

    hello(1, 2, 4);

    // printf("%d ", num);
    // hello();
    // hello();
    // hello();
    // hello();
    // hello();

    for (int i = 1; i <= 100; i++) {
        hello(i, 2, 4);
    }

    // printf("hello %d %f %c ", i, j, ch);

    // printf("%d ", i);
    return 0;
}