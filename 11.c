#include <stdio.h>
int main() {
    int n, i,flag;
    for (i = 1; i <= 2; ++i) 
    {
        scanf("%d", &n);
        switch (n) {
            case (1):
                printf("one\n");
                break;
            case (2):
                printf("two\n");
                break;
            case (3):
                printf("three\n");
                break;
            case (4):
                printf("four\n");
                break;
            case (5):
                printf("five\n");
                break;
            case (6):
                printf("six\n");
                break;
            case (7):
                printf("seven\n");
                break;
            case (8):
                printf("eight\n");
                continue;
            case (9):
                printf("nine\n");
                break;
            default:
                printf("nine\n");
                break;
                
        }
    if (n % 2 == 0)
    {
        flag=1;}
    }
    if (flag==1)
    {
        printf("even");
    }
    if (n > 9)
    {
        if (n % 2 == 0)
            printf("even\n");
        else {
            printf("odd\n");
        }
    }
}
