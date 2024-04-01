#include<stdio.h>
int main() {

    struct student {
        int rnum;
        char grade;
        float pr;
    }; 

    struct student hadi; // declaring object hadi
    hadi.rnum = 1;
    hadi.grade = 'a';
    hadi.pr = 43.3;

    printf("%d %c %f \n", hadi.rnum, hadi.grade, hadi.pr);

    struct student nayani;
    nayani.rnum = 2;
    nayani.pr = 55.55;
    nayani.grade = 'b';
    printf("%d %c %f \n", nayani.rnum, nayani.grade, nayani.pr);

    nayani.pr = 65.33;
    printf("%d %c %f \n", nayani.rnum, nayani.grade, nayani.pr);


    struct student mahmad = {3, 'c', 99.99};
    printf("%d %c %f \n", mahmad.rnum, mahmad.grade, mahmad.pr);

    return 0;
}