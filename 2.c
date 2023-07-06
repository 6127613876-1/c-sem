#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    int a;
    scanf("%d",&a);
    printf("%d",a);
    switch (a)
    {
    case(1):
    {
        char c[20];
            int x;
            printf("Enter an string:");
            scanf("%s",&c);
            x=strlen(c);
            printf("Length of the given string is %d",x);
            break;
    }
    case(2):
    {
        char d[20],rev[100];
        int size,i;
        printf("str");
        scanf("%s",&d);
        size=strlen(d);
        for(i=0;i<d[i]!='\0';i++)
        {
            rev[size-i-1]=d[i];
        }
        if(strcmp(d,rev)==0)
        {
            printf("pali");
        }
        else{
            printf("Not pali");
        }
        break;
    }
    case(3):
    {
        char c[20];
            int i,count=0;
            printf("Enter an string:");
            scanf("%s",c);
            for(i=0;c[i]!='\0';i++)
            {
                c[i]=tolower(c[i]);
                if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
                {
                    count++;
                }
            }
            printf("The total numbers of vowels are %d\n",count);
            if(count>1)
            {
                printf("it contains more than one vowel");
            }
            else
            {
                printf("it not contains more than one vowel");
            }
            break;
    }
    default:
        {
            printf("Enter an correct method");
        }
}
}