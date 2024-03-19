// 123 -> 6
// 353 -> 45

#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int prod = 1;

    while (num != 0) {
        prod = prod * (num % 10);
        num = num / 10; 
    }
    printf("%d ", prod);
}


// 1 * 2 * 3 = 3 * 2 * 1
// num = 123 
// prod = 1

// num = 123 
// prod = prod {1} * (num % 10 {3}) => prod = 3
// num = num / 10 -> num = 12

// prod = prod {3} * num % 10 {2} => prod = 6 
// num = num / 10 -> num = 1

// prod = prod {6 } * num % 10 {1} => prod = 6


