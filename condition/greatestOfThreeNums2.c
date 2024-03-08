#include <stdio.h>
void main()
{
    int n1, n2, n3;
    printf("Enter n1 n2 n3 : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // check
    // (n1 > n2) ? (n1 > n3) ? printf("%d ", n1) : printf("%d ", n3) : (n2 > n3) ? printf("%d ", n2)
    //   : printf("last num3 = %d ", n3);

    // if (n1 > n2 && n1 > n3)
    //     printf("%d ", n1);
    // else if (n2 > n1 && n2 > n3)
    //     printf("%d ", n2);
    // else if (n3 > n1 && n3 > n2)
    //     printf("%d ", n3);
    // else
    //     printf("%d ", n3);

    (n1 > n2 && n1 > n3) ? printf("%d ", n1) : (n2 > n1 && n2 > n3) ? printf("%d ", n2)
                                             : (n3 > n1 && n3 > n2) ? printf("%d ", n3)
                                                                    : printf("%d ", n3);

    // {(4 > 3) || (4 < 2) || (5 < 2)} && (3 < 4) -> true
}