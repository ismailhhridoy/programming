#include <stdio.h>

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);

    // input
    int ar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] != x)
            {

                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}