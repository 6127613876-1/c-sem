#include <stdio.h>

struct book
{
    int bid;
    char bknam[20];
    int bkqua;
}b;

void main()
{
    FILE *f;
    char s[100];
    int i;
    f=fopen("text.txt","w");
    struct book b[3];
    for (i = 0; i < 3; i++)
    {
        scanf("%d",&b[i].bid);
        scanf("%s",b[i].bknam);
        scanf("%d",&b[i].bkqua);

    }
        for ( i = 0; i < 3; i++)
        {
        fprintf(f,"%d ",b[i].bid);
        fprintf(f,"%s ",b[i].bknam);
        fprintf(f,"%d",b[i].bkqua);
        fprintf(f,"\n");
        }
}