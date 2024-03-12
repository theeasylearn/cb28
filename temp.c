#include<stdio.h>
int main() {


    int num = 2345242;

    int length = 0;

    while (num != 0) {
        length ++;
        num /= 10;
    }
    printf("%d ", length);
    return 0;
}