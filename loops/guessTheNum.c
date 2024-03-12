// guess the number game

#include<stdio.h>
void main() {

    int key = 6;

    int input;


    do {
        // body 
        
        printf("Enter a number : ");
        scanf("%d", &input);

    } while (input != key) ; 

    printf("You have entered the key ! ");

}   

