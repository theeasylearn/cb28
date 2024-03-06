#include<stdio.h>
void main() {
    int n1, n2;
    char operator;

    printf("num1 operator num2 : ");

    scanf("%d %c %d", &n1, &operator, &n2);

    // printf("%d %c %d", n1, operator, n2);

    switch (operator) {
        
        case '+' :
            printf(" = %d \n", n1 + n2);
            break;

        default :
            printf("invalid input ");
            break;
            
        case '-' :
            printf(" = %d \n", n1 - n2);
            break;
        case '*' :
            printf("  = %d \n", n1 * n2);
            break;
        case '/' :
            printf(" = %.2f \n", (float)n1 / n2);
            break;

                
    }
 
}