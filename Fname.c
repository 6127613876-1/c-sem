#include <stdio.h>
#include <string.h>

void main()
{
    char Fname[2][10][30];
    int i,j;
    strcpy(Fname[0][0],"john");
    strcpy(Fname[1][0],"cena");
    strcpy(Fname[0][1],"brock");
    strcpy(Fname[1][1],"lesner");
    strcpy(Fname[0][2],"roman");
    strcpy(Fname[1][2],"regins");
    for(i=0;i<3;i++)
    {
        printf("%s%s\n",Fname[0][i],Fname[1][i]);
    }
}