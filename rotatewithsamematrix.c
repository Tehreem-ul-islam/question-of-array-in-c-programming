#include <stdio.h>
int main()
{
    int x;
    int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            x = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = x;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3/2; j++)
        {
            x = mat[i][j];
            mat[i][j] = mat[i][2 - j];
            mat[i][2 - j] = x;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}