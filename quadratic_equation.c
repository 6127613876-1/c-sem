#include<stdio.h>
#include<math.h>
void quad();
void main()
{
    quad();
}
void quad()
{
    float a,b,c,quad2,quad1,v;
    printf("Enter an first number:");
    scanf("%f",&a);
    printf("Enter an second number:");
    scanf("%f",&b);
    printf("Enter an third number:");
    scanf("%f",&c);
    v=b*b-4*a*c;
    quad1=(-b+sqrt(v))/(2*a);
    quad2=(-b-sqrt(v))/(2*a);
    printf("%f %f",quad1,quad2);
}