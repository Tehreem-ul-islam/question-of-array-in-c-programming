#include <stdio.h>
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; i++)
    {
        printf("| ");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("|");
        printf("\n");
    }
    for (int i = 2; i >=0; i--)
    {
        if (i % 2 == 0)
        {
            printf("| ");
            for (int j = 2; j >= 0; j--)
            {
                printf("%d ", arr[j][i]);
            }
            printf("|");
            printf("\n");
        }
        else
        {
            printf("| ");
            for (int j = 0; j < 3; j++)
            {
                printf("%d ", arr[j][i]);
            }
            printf("|");
            printf("\n");
        }
    }
}