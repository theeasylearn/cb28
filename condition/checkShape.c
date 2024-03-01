// check shap -> rectangle or square

#include<stdio.h>
void main() {
    float height, width;
    printf("Enter height : ");
    scanf("%f", &height);
    
    printf("Enter width : ");
    scanf("%f", &width);

    float area = height * width;    
    printf("%.2f * %.2f = %.2f unitsq \n",height, width, area);

    if (height == width) {
        printf("It is a square shape ");
    } else {
        printf("It is a rectangle shape ");        
    }
}
