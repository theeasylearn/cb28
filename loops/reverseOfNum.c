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

////////////////////////////////////////////////////////////////////
// num = 123 -> 321

// rnum = 0

// temp1 = num % 10 = temp1 = 3

// rnum * 10 + 3 => rnum = 3
// num = num / 10 => num = 12

// temp1 = num % 10 => temp1 = 2
// rnum * 10 + temp1 => rnum = 32

// num = num / 10 => num = 1
// temp1 = num % 10 => temp1 = 1
// rnum * 10 + temp1 => rnum = 321



////////////////////////////////////////////////////////////////////

// num = 31232  rnum = 23213

// rnum = 0


// rnum = rnum * 10 + num % 10 // rnum = 2
// num = num / 10 // num = 3123

// rnum = rnum * 10 {20} + num % 10 {3} // 23
// num /= 10 // num = 312

// rnum = rnum * 10 {230} + num % 10 {2} // 232
// num /= 10 // 31

// rnum = rnum * 10 {2320} + num % 10 {1} // 2321
// num /= 10 // 3  

// rnum = rnum * 10 {23210} + num % 10 {3} // 23213
// num = num / 10 // 0