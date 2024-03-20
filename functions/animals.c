#include<stdio.h>
#include<stdbool.h>

bool cow () {
    printf("cow function ");
    return false;
}

int main() {

    printf("%d ", cow ());
    return 0;
}