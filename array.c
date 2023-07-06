#include <stdio.h>
#include <string.h>
void vegetable();
void main()
{
    for (int i = 1; i <15 ; ++i)
    {
        vegetable();
    }
}
void vegetable()
{
    char color[20],veg[20];
    printf("Enter a vegetable:");
    scanf("%s",&veg);
    printf("Enter a color:");
    scanf("%s",&color);
    int o,g,y,v,j;
    for(j=0;color[j]!='\0';j++)
    {
        switch(color[j])
        {
            case 'v':
            {
                v++;
                printf("v for violet\n");
                break;
            }

            case 'y':
            {
                y++;
                printf("y for yellow\n");
                break;
            }

            case 'g':
            {
                g++;
                printf("g for green\n");
                break;
            }
            case 'o':
            {
                o++;
                printf("o for Orange\n");
                break;
            }
            default:
            {
                printf("Enter a valid input\n");
            }
        }
        break;
    }
}