#include<stdio.h>
int main()
{
        int row, col, n;
    printf("Enter N: ");
    scanf("%d", &n);

    for (row = n; row >=1; row--)
    {
        for (col = 1; col <= n - row; col++)
            //print space
            printf("  ");
        for (col = 1; col <= 2 * row - 1; col++)
            printf("%d ", col);

            printf("\n");
    }
}



