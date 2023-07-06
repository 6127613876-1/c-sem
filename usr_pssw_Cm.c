#include<stdio.h>
#include<string.h>
void main()
{
    char usr[10][15]={"user1","user2"},psw[10][15]={"psw1","psw2"},conm[10][20]={"ms1","msg2"},ur[20],ps[20];
    int i,n=2;
    printf("user");
    scanf("%s",ur);
    printf("password");
    scanf("%s",ps);
    for (i=0;i<2;i++)
    {
    if(strcmp(ur,usr[i])==0&&strcmp(ps,psw[i])==0)
    {
        printf("%s",conm[i]);
    }
    }
}