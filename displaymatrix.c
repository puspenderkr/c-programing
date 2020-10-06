#include <stdio.h>

int input(int r, int c)
{
    int mat[r][c];
    printf("Enter the no of MATRIX :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter the data in [%d][%d] : ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("the matrix is\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int main()
{
    int row, col;
    printf("Enter the no. of rows : ");
    scanf("%d", &row);
    printf("Enter the no. of colounms : ");
    scanf("%d", &col);
    input( row, col);
    // void output(int row, int col);

    return 0;
}