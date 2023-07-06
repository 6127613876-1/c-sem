#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j;
    scanf("%d", &n);
    char temp[100];

    char a[n][100];

    for (int i = 0; i < n; i++)
        scanf("%s", a[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%s\t", a[i]);
    return 0;
}
