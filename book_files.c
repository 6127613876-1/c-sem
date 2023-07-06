#include <stdio.h>
#include <string.h>

struct book
{
    char bkname[100];
    char cat[100];
    char arth[100];
    int cost;
    int year;
}b[3];

void main()
{
    FILE *file;
    file=fopen("books.txt", "w+");
    int i,j;
    struct book b[3];
    for ( i = 0; i <3; i++)
    {
        char nam[100],c[100],ca[100],ar[100],co,year;
        printf("name[%d]",i);
        fscanf(file, "%s", &b[i].bkname);
        printf("category[%d]",i);
        fscanf(file, "%s", &b[i].cat);
        printf("cost[%d]",i);
        fscanf(file, "%d", &b[i].cost);
        printf("aruthor[%d]",i);
        fscanf(file, "%s", &b[i].arth);
        printf("year[%d]",i);
        fscanf(file, "%d", &b[i].year);
    }
}