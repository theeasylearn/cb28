// length of number
// 123 -> 3
// 5413 -> 4

#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int length = 0;

    while (num != 0)
    {
        length++;
        num = num / 10;
    }
    printf("%d ", length);
}

// len = 0

// num = 123

// len++  =>  1
// num / 10 -> num = 12

// len ++ -> 2
// num / 10 -> num = 1

// len ++ -> 3
// num / 10 -> num = 0