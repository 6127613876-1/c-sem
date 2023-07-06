#include <stdio.h>
#include <string.h>

int main() {
    char cities[5][20]; // Assuming we have 5 cities, each with a maximum length of 20 characters
    int i, j, n;
    char temp[20];
    printf("Enter the number of cities: ");
    scanf("%d", &n);
    printf("Enter %d city names:\n", n);
    for(i=0; i<n; i++) {
        scanf("%s", cities[i]);
    }
    // Sorting the city names in alphabetical order using bubble sort
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(strcmp(cities[j], cities[j+1]) > 0) {
                strcpy(temp, cities[j]);
                strcpy(cities[j], cities[j+1]);
                strcpy(cities[j+1], temp);
            }
        }
    }
    printf("The city names in alphabetical order are:\n");
    for(i=0; i<n; i++) {
        printf("%s\n", cities[i]);
    }
    return 0;
}