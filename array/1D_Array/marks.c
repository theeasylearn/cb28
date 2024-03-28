#include<stdio.h>
int main() {

    int marks[] = {60, 70, 80, 100};
    marks[3] += 80;

    // printf("marks1 = %d \n", marks[0]);
    // printf("marks2 = %d \n", marks[1]);
    // printf("marks3 = %d \n", marks[2]);
    // printf("marks4 = %d \n", marks[3]);

    printf("\n============\n");
    for (int i = 0; i <= 3; i++) 
        printf("%d \n", marks[3]);

    int marks2[4];
    // scanf("%d", &marks2[0]);
    // scanf("%d", &marks2[1]);
    // scanf("%d", &marks2[2]);
    // scanf("%d", &marks2[3]);
    for (int i = 0; i < 4; i++) {
        scanf("%d", &marks2[i]);
    }
    for (int i = 0; i< 4; i++) {
        printf("%d ", marks2[i]);
    }
    return 0;
}