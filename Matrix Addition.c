#include <stdio.h>

int main ()
{
    int row, column, i, j;

    printf("Enter the number of rows and columns of matrices: ");
    scanf("%d %d", &row, &column);

    int a[row][column], b[row][column], c[row][column];

    printf("\nEnter the elements of matrix A:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the elements of matrix B:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nMatrix A is:");
    for (i = 0; i < row; i++)
    {
        printf("\n");
        for (j = 0; j < column; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }

    printf("\n\nMatrix B is:");
    for (i = 0; i < row; i++)
    {
        printf("\n");
        for (j = 0; j < column; j++)
        {
            printf("%d\t", b[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\n\nThe sum[C] of the two matrices is:");
    for (i = 0; i < row; i++)
    {
        printf("\n");
        for (j = 0; j < column; j++)
        {
            printf("%d\t", c[i][j]);
        }
    }
    printf("\n");

    return 0;
}
