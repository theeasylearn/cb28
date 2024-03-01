// check if user's eligibily for a scholarship based on his pr 

#include<stdio.h>
void main() {
    int maxTotal = 600;   

    printf("Enter total marks: ");
    int total;
    scanf("%d", &total);

    float pr = 100 * (float)total / maxTotal ;
    printf("pr = %.2f \n", pr);

    if (pr >= 80) {
        printf("You are eligible ");
    } else {
        printf("You are not eligible ");
    }   
}
