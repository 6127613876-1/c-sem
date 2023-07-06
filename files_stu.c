#include <stdio.h>

struct student
{
    int id;
    int name[20];
    int total,m1,m2,m3;
}s;
void main()
{
    FILE *f;
    f=fopen("text1.txt","w");
    int i,j;
    struct student s[5];
    for(i=0;i<3;i++)
    {
        scanf("%d",&s[i].id);
        scanf("%s",s[i].name);
        scanf("%d",&s[i].m1);
        scanf("%d",&s[i].m2);
        scanf("%d",&s[i].m3);
        s[i].total=s[i].m1+s[i].m2+s[i].m3;
    }
    
    for(i=0;i<3;i++)
    {
        fprintf(f,"%d ",s[i].id);
        fprintf(f,"%s ",s[i].name);
        fprintf(f,"%d ",s[i].total);
        fprintf(f,"%d ",s[i].m1);
        fprintf(f,"%d ",s[i].m2);
        fprintf(f,"%d ",s[i].m3);
        fprintf(f,"\n");
    }
}