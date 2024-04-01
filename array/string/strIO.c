// take user's name as an input and print it using loop and puts method 

#include<stdio.h>

void printName(char name[]) {
    puts(name);
}

int main() {

    char name[10];
    
    printf("Enter your name : ");
    scanf("%s", name);
    // gets(name);
    // for (int i = 0; i < 10; i++) {
    // *     // fflush(stdin);
    //     scanf("%c", &name[i]);
    // }
    // printf("asdf ");
    printf("name = %c ", name[0]);
    printName(name);
    return 0;
}
