#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int ar[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }


        for (int j = 0; j < n; j++)
        {
            printf("%d ", ar[m-1][j]);
        }

        printf("\n");
        
        for (int j = 0; j < m; j++)
        {
            printf("%d ", ar[j][n-1]);
        }

    return 0;
}