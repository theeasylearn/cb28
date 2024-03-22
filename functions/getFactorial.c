// 3! -> 3 * 2 * 1 => 6
// 10! = 10 * 9 * 8 * 7 * 6 * 5 * 4 *3 *2* 1= 3628800

#include <stdio.h>

int getFact(int num)
{
    int fact = 1;
    for (int i = num; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
}

int main()
{

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    printf("fact = %d ", getFact(num));
    return 0;
}