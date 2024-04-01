#include<stdio.h>
int main() {

    char ch[] = {'a', 'b', 'c'};
    int size = sizeof(ch) / sizeof(ch[0]);

    // printf("%c %c %c \n", ch[0], ch[1], ch[2]);

    for (int i = 0; i < size; i++) {
        fflush(stdin);
        printf("%c ", ch[i]);
    }
    printf("\n");
    char str[] = "nayani hadi "; 
    printf("name = %s \n", str);
    printf("name = ");
    puts(str);

    printf("\n--------------------\n");

    printf("%c ", str[10]);
    str[10] = 'e';
    printf("%c ", str[10]);

    char btr[10];

    // * to take input
    // for (int i = 0; i < 10; i++) {
    //     fflush(stdin);
    //     scanf("%c", &btr[i]);
    // }
    // gets(btr);
    scanf("%s", &btr);

    // * to show output
    // puts(btr);
    // for (int i = 0; i < 10; i++) {
    //     printf("%c ", btr[i]);
    // }
    printf("%s ", btr);
    return 0;
}