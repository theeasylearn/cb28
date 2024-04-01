// create a structure of students and store name, grade, marks and pr 

#include<stdio.h>
int main() {

    struct student
    {
        char name[18];
        char grade;
        int marks;
        float pr;
    };

    struct student hadi = {"nayani hadi", 'a', 100, 100};
    printf("%s %c %d %f \n", hadi.name, hadi.grade, hadi.marks, hadi.pr);     

    hadi.marks += 100;
    printf("%s %c %d %f ", hadi.name, hadi.grade, hadi.marks, hadi.pr);     

    return 0;
}