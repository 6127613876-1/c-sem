#include<stdio.h>
#include<math.h>
int main()
{
    int method;
    printf("Enter an method:");
    scanf("%d",&method);
    printf("1=ceil\n");
    printf("2=floor\n");
    printf("3=fabs\n");
    printf("4=round\n");
    printf("5=sqrt\n");
    printf("6=pow\n");
    switch(method)
    {
        case 1:
        {
            float num,x;
            printf("Enter an value:");
            scanf("%f",&num);
            printf("%f",ceil(num));
            break;
        }
        case 2:
        {
            float num,x;
            printf("Enter an value:");
            scanf("%f",&num);
            printf("%f",floor(num));
            break;
        }
        case 3:
        {
            float num,x;
            printf("Enter an value:");
            scanf("%f",&num);
            printf("%f",fabs(num));
            break;
        }
        case 4:
        {
            float num,x;
            printf("Enter an value:");
            scanf("%f",&num);
            printf("%f",round(num));
            break;
        }
        case 5:
        {
            int num,x;
            printf("Enter an value:");
            scanf("%d",&num);
            x=sqrt(num);
            printf("%d",x);
            break;
        }
        case 6:
        {
            int num,num1,x;
            printf("Enter an value:");
            scanf("%d",&num);
            printf("Enter an value:");
            scanf("%d",&num1);
            x=pow(num,num1);
            printf("%d",x);
            break;
        }
        default:
        {
            printf("Check the correct method");
        }
    }
}