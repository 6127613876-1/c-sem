#include <stdio.h>
void main(){
    int n,rem,n1,rev=0;
    scanf("%d",&n);
    n1=n;
    while (n1>0)
    {
        rem=n1%10;
        rev=rev*10+(rem);
        n1=n1/10;
    }
    printf("%d",rev);
    if(rev==n)
    {
    printf("pali%d",rev);
    }
    else
    {
        printf("not pali");
    }
}