// factorial of first n number

#include <stdio.h>
void main()
{

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    // printf("%d ", num);

    if (num == 0) 
    {
        printf("0! = 1 ");
    }
    else if (num < 0) {
        printf("-1 ");
    }
    else
    {
        int fact = 1;
        for (int i = 1; i <= num; i++)
        {
            fact *= i; // 1 // 2 // 6 // 24 // ...
            printf("%d! = %d \n", i, fact);
        }
    }
}

// 1! = 1
// 2! = 2
// 3! = 6
// 4! = 24
// 5! = 120
// 6! = 720
// 7! = 5040
// 8! = 40320
// 9! = 362880
// 10! = 3628800