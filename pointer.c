#include<stdio.h>
void main()
{
    int x=10;
    int*ptr=&x;
    (*ptr)++;
    printf("%d\n",*ptr);
}