#include<stdio.h>

void print(int num) {

    if (num <= 100) {
        for (int i = 100; i >= num; i--) {
            printf("%d ", i);
        }
    }
    else {
        printf("Enter a number less than 100 ");
    }


    return;
}

int main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    print(num);
    return 0;

}