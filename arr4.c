#include <stdio.h>
int main ()
{
    int arr[10];
    int pos, i, num,largest,second_largest;
    printf (" \n Enter the number of elements in an array: \n ");
    scanf (" %d", &num);

    printf (" \nEnter %d elements in array: \n ", num);
    for (i = 0; i < num; i++ )
    {   printf ("arr[%d] = ", i);
        scanf (" %d", &arr[i]);
    }
    largest = arr[0];
    second_largest = arr[1];
    
    for(i=1; i<num; i++)
    {
        if(arr[i]>largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest)
        {
            second_largest = arr[i];
        }
    }
    printf("The second largest number in the array is: %d", second_largest);
}