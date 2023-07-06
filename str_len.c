#include <stdio.h>
#include <string.h>
void str();
void main()
{
    str();
}
void str()
{
    int n;
    char s[50];
    scanf("%[^\n]%*c",s);
    printf("%s",s);
    n=strlen(s);
    printf("\n%d",n);
    printf("\n%s",strrev(s));
}