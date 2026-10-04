#include<stdio.h>
#include<conio.h>

void main(){
    int rows =0;
    int columns = 0;
    printf("Enter the number of rows: \n");
    scanf("%d", &rows);

    printf("Enter the number of columns: \n");
    scanf("%d", &columns);

    int matrix[rows][columns];

    printf("Enter the value for elements: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        printf("| ");
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf(" |\n");
    }
    


    
}