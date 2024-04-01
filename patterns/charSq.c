
#include <stdio.h>
void main()
{

    char ch = 'a';
    int i, j;

    // for (i = 1; i <= 5; i++) { // row
    //     for (j = 1; j <= 5; j++) { // columns, elements
    //         printf("%c ", ch);
    //     }
    //     ch++;
    //     printf("\n");
    // }

// a a a a
// b b b b
// c c c c
// d d d d
    for (int i = 1; i <= 3; i++)
    { // row
        for (int j = 1; j <= 7; j++)
        { // columns, elements
            printf("%c ", i + 96);
        }
        printf("\n");
    }

    printf("\n-----------------\n");

     
    // a b c d
    // a b c d
    // a b c d
    // a b c d

    for (int i = 1; i <= 3; i++)
    { // row
        for (int j = 1; j <= 7; j++)
        { // columns, elements
            printf("%c ", j + 96);
        }
        printf("\n");
    }

    printf("\n-----------------\n");
    for (i = 1; i <= 3; i++) { // row
        for (j = 1; j <= 7; j++) { // columns, elements
            printf("%c ", ch);
            ch++;
        }
        ch = 'a';
        printf("\n");
    }

}