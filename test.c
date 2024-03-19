
//  1 guess the number : take input from user until he enters the key                               -> 3 marks

//  2 length of password : print "strong" if length > 6, print "weak " if length <= 6 USING LOOP    -> 3 marks

//  3 Multiplication table : take n {input} from user and print table of n                          -> 3 marks

//  4  A                                                                                            -> 3 marks
//     B C
//     D E F

//  5 Celsius to Fahrenheit conversion : (0°C × 9/5) + 32 = 32°F                                     -> 3 marks

//  6 print the highest marks of three students                                                     -> 3 marks

//  7 print highest num of given two nums using TERNARY OPERATOR                                    -> 3 marks

//  8 print reverse of a number  -> 123 -> 321                                                      -> 3 marks

//  9 swap two nums variable                                                                        -> 1 mark

#include<stdio.h>
void main() {

//  1 guess the number : take input from user until he enters the key                               -> 3 marks
/*
   int key = 5;
   int input;

   do {
      printf("Enter a number : ");
      scanf("%d", &input);
   } while (input != key);
   printf("You have entered Key ");
*/

//  2 length of password : print "strong" if length > 6, print "weak " if length <= 6 USING LOOP    -> 3 marks
/*
   int pwd = 123;
   int length = 0;
   while (pwd != 0)
   {
         length++; // 1 // 2 // 3
         pwd /= 10; // 12 // 1 // 0
   }
   if (length >6) printf("Strong password ");
   else printf("Weak password ");
*/


//  3 Multiplication table : take n {input} from user and print table of n                          -> 3 marks
/*
   int n;
   printf("Enter a number : ");
   scanf("%d", &n);

   for (int i = 1; i <= 10; i++) {
      printf("%d * %d = %d \n", n, i, n * i);
   }  
*/



//  4  A                                                                                                  -> 3 marks
//     B C        
//     D E F        
// A -> ascii value = 65
/*
   char ch = 'A';
   for (int i = 1; i <= 3; i++) {
      for (int j = 1; j <= i; j++) {
         printf("%c ", ch);
         ch++;
      }
      printf("\n");
   }
*/

//  5 Celsius to Fahrenheit conversion : (0°C × 9/5) + 32 = 32°F                                     -> 3 marks
/*
   float temp = 10;
   temp = (temp * 9 / 5) + 32;
   printf("%.2f ", temp);   
*/



//  6 print the highest marks of three students                                                     -> 3 marks
/*
   int m1 = 10, m2 = 20, m3 = 30;
   if (m1 > m2 && m1 > m3) {
       printf("%d ", m1);
   }
   else if (m2 > m1 && m2 > m3) {
       printf("%d ", m2);
   }
   else if (m3 >= m1 && m3 >= m2) {
       printf("%d ", m3);
   }
*/

//  7 print highest num of given two nums using TERNARY OPERATOR                                    -> 3 marks
/*
   int n1 = 1, n2 = 2;
   printf("%d ", (n1 > n2) ? n1 : n2);
*/

//  8 print reverse of a number  -> 123 -> 321                                                      -> 3 marks
/*
   int num = 123;
   int rnum = 0;
   while (num != 0)
   {
      rnum = rnum * 10 + num % 10; // 320 + 1 = 321
      num /= 10; // 1
   }
   printf("%d ", rnum);
 */

//  9 swap two nums variable                                                                        -> 1 mark
/*
   int n1 = 1, n2 = 2;
   int temp = n1;
   n1 = n2;
   n2 = temp;

   printf("%d %d ", n1, n2);
*/
}