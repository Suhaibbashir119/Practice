#include<stdio.h>
#include<conio.h>

void main(){
    //int rows =0;
//    int columns = 0;
//    printf("Enter the number of rows: \n");
//    scanf("%d", &rows);
//
//    printf("Enter the number of columns: \n");
//    scanf("%d", &columns);
//
//    int matrix[rows][columns];
//
//    printf("Enter the value for elements: \n");
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < columns; j++)
//        {
//            scanf("%d",&matrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    for (int i = 0; i < rows; i++)
//    {
//        printf("| ");
//        for (int j = 0; j < columns; j++)
//        {
//            printf("%d ", matrix[i][j]);
//        }
//        printf(" |\n");
//    }

    int rows1 =0;
    int rows2 = 0;
    int columnsBoth = 0;
    printf("Enter the number of matricies: \n");
    scanf("%d", &rows1);

    printf("Enter the number of rows: \n");
    scanf("%d", &rows2);

    printf("Enter the number of columns: \n");
    scanf("%d", &columnsBoth);

    int matrixx[rows1][rows2][columnsBoth];

    printf("Enter the value for elements: \n");
    for (int i = 1; i <= rows1; i++)
    {
        printf("Enter the elements for matrix %d: \n", i);
        for (int j = 0; j < rows2; j++)
        {
            for(int k =0; k < columnsBoth; k++ )
            {
                scanf("%d",&matrixx[i][j][k]);
            }
                printf("\n");
        }
    }


    printf("\n\n MATRICIES \n");
    for (int i = 1; i <= rows1; i++)
    {
        printf("\n Matrix %d: \n", i);
        for (int j = 0; j < rows2; j++)
        {
            printf("|");
            for(int k =0; k < columnsBoth; k++ )
            {
                printf("  %d ",matrixx[i][j][k]);
            }
                printf("|\n");
        }
    }





}
