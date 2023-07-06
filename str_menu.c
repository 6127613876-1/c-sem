#include<stdio.h>
#include<string.h>
void main()
{
    int l;
    printf("1)STRINGLENGTH");
    printf("\n2)STRINGREVERSE");
    printf("\n3)MORETHANONEVOWELSORNOT");
    
    printf("\nEnter an choices:");
    scanf("%i",&l);
    switch(l)
    {
        case 1:
        {
            char c[20];
            int x;
            printf("Enter an string:");
            scanf("%[^\n]%*c",c);
            x=strlen(c);
            printf("Length of the given string is %d",x);
            break;
        }
        case 2:
        {
            char c[100];
            int size,i;
            printf("Enter an string:");
            scanf("%s",c);
            size=strlen(c);
            char rev[100];
            for(i=0;c[i]!='\0';i++)
            {
                rev[size-i-1]=c[i];
            }
            if(strcmp(c,rev)==0)
            {
                printf("The given string is palindrome");
             }
            else   
            {
                printf("The given string is not a palindrome");
            }
            break;
        }
        case 3:
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