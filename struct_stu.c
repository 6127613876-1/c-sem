#include <stdio.h>
#include<string.h>

struct data
{
    char name[20];
    int rollno;
    int m1,m2,m3,m4,m5;
    int total;
}s;
void main()
{
    int i,j;
    int avg=0;
    int max;
    struct data s[3];
    
    for ( i = 0; i < 3; i++)
    {
        s[i].total=0;
        printf("\nenter name");
        scanf("%s",s[i].name);
        printf("\nenter rollno");
        scanf("%d",&s[i].rollno);
        printf("\nenter the marks");
        scanf("%d",&s[i].m1);
        scanf("%d",&s[i].m2);
        scanf("%d",&s[i].m3);
        scanf("%d",&s[i].m4);
        scanf("%d",&s[i].m5);
        s[i].total = s[i].total+ s[i].m1 + s[i].m2+s[i].m3+s[i].m4+s[i].m5;
        printf("\nthe total is %d:",s[i].total);
    }
    for(i=0;i<3;i++)
    {
        avg=avg+s[i].total;
    }
    printf("\nthe avg is %d ",avg);
    max=s[0].total;
    for(i=1;i<3;i++)
    {
        if(max<s[i].total)
        {
            max=s[i].total;
        }
    }
    printf("\n max is %d",max);
}