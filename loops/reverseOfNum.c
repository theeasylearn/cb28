// reverse of a number
// 123 -> 321
// 5684 -> 4865

#include <stdio.h>
void main()
{

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int rnum = 0;

    while (num != 0)
    {
        rnum = rnum * 10 + num % 10;
        num = num / 10 ;
    }
    printf("%d ", rnum);
}

// num = 123 -> rnum = 321 {op}

// rnum = 0

// num {123} % 10 = 3
// rnum = rnum + 3 // 3
// num / 10 => num = 12

// rnum = rnum * 10 + num % 10; // 32
//        3 * 10 = 30 + 2
// num = num / 10 => num = 1

// rnum = rnum * 10 + num % 10 = 321
//        32 * 10 = 320 + 1
// num = num / 10 => num = 0
