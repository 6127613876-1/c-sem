#include <stdio.h>
void BMI();
void main()
{
    BMI();
}
void BMI()
{
    float height,weight,BMI;
    printf("the height in metre = ");
    scanf("%f",&height);
    printf("the weight in kg = ");
    scanf("%f",&weight);
    BMI=weight/(height*height);
    printf("The BMI = %f",BMI);
}