#include <stdio.h>
struct student
{
    int id,total,m1,m2,m3,m4,m5;
    char name[20];
}s;
void main()
{
    FILE *f;
    int i,j;
    struct student s[3];
    f=fopen("text.3","w");
    for(i=0;i<3;i++)
    {
        printf("Sname[%d]",i);
        scanf("%s",s[i].name);
        printf("Sid[%d]=",i);
        scanf("%d",&s[i].id);
        printf("Smark[%d]=",i);
        scanf("%d",&s[i].m1);
        scanf("%d",&s[i].m2);
        scanf("%d",&s[i].m3);
        scanf("%d",&s[i].m4);
        scanf("%d",&s[i].m5);
        s[i].total=s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5;
    }
    for(i=0;i<3;i++)
    {
        fprintf(f,"%s\n",s[i].name);
        fprintf(f,"%d\n",s[i].id);
        fprintf(f,"%d\n",s[i].m1);
        fprintf(f,"%d\n",s[i].m2);
        fprintf(f,"%d\n",s[i].m3);
        fprintf(f,"%d\n",s[i].m4);
        fprintf(f,"%d\n",s[i].m5);
        fprintf(f,"%d\n",s[i].total);
        fprintf(f,"s[%d] is completed\n",i);
    }
}