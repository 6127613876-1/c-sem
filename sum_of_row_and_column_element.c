#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

   for ( int i = 0; i < rows; i++)
   {
    int sum = 0;
    for ( int j = 0; j < cols; j++)
    {
        sum=sum+matrix[i][j];
    }
    printf("%d",sum);
   }
   for(int j=0 ;j<cols;j++)
   {
    int sum=0;
    for(int i=0;i<rows;i++)
    {
        sum=sum+matrix[i][j];
    }
    printf("%d",sum);
   }

    return 0;
}