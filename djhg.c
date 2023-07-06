#include<stdio.h>
int main()

{
    char line[100]="gokul";
    char n;
    int i,count;
    printf("enter an string:");
    scanf("%c",&n);
    count=0;
    for(i=0;i<line[i]!='\0';i++)
    {
        if(line[i]==n)
        {
            count++;
        }
    }
    printf("The total number of the letters are %d",count);
}