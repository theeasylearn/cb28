#include<stdio.h>
void main() {

    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    // int i = 1;
    // while (i <= num) {
    //     printf("%d ", i);
    //     i++;
    // }

    int i;
    for (i = 1; i <= num; i++) {
        printf("%d ", i);   
    }
}