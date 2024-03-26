// add two nums using pointers 

#include<stdio.h>
int *sum;
void getSum(int *n1, int *n2) {
    int sum = *n1 + *n2;
}
int main() {

    int n1 = 1, n2 = 2;

    getSum(&n1, &n2);
    printf("sum = %d ", *sum);

    return 0;
}