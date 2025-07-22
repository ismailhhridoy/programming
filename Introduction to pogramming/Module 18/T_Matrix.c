#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    // input
    int ar[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    // primary diagonal

    int primary_diagonal_sum=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary_diagonal_sum += ar[i][j];
            }
        }
    }

    
    // Secondary diagonal

    int secondary_diagonal_sum=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i+j == n-1)
            {
                secondary_diagonal_sum += ar[i][j];
            }
        }
    }

    
    printf("%d", abs(primary_diagonal_sum - secondary_diagonal_sum));

    return 0;
}