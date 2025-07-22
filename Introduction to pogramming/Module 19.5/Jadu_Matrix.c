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

    if (m != n)
    {
        printf("NO");
    }
    else
    {
        int jadu_matrix = 1;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j || i + j == n - 1)
                {

                    if (ar[i][j] != 1)
                    {
                        jadu_matrix = 0;
                        break;
                    }
                }
                else
                {
                    if (ar[i][j] != 0)
                    {
                        jadu_matrix = 0;
                        break;
                    }
                }
            }

            if (jadu_matrix == 0)
            {
                break;
            }
        }

        if (jadu_matrix)
        {
            printf("YES");
        } else{
            printf("NO");
        }
    }

    return 0;
}