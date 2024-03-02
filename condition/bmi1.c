// bmi

#include<stdio.h>
void main() {
    float height, weight, BMI;
    
    printf("Enter your height : ");
    scanf("%f", &height);

    printf("enter your weight : ");
    scanf("%f", &weight);

    
     BMI  = weight / (height * height);
   
    printf("%f \n", BMI);

    if (BMI<=18.5) {
        printf("your BMI under weight ");
    }

    else {
        printf("your BMI over weight ");
    }
}