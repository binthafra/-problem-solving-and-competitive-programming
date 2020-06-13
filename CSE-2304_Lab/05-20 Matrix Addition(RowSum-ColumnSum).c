#include <stdio.h>

int main()
{
    int i, j, m, n;
    int matrix[10][20];
    int sumR, sumC;

    printf("Enter number of rows & columns : ");
    scanf("%d" "%d", &m, &n);


    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < m; i++)
    {
        sumR = 0;
        for (j = 0; j < n; j++)
        {
            sumR += matrix[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sumR);
    }

    printf("\n");
    for (i = 0; i < n; i++)
    {
        sumC = 0;
        for (j = 0; j < m; j++)
        {
            sumC += matrix[j][i];
        }
        printf("Sum of column %d = %d\n", i + 1, sumC);
    }

    return 0;
}
