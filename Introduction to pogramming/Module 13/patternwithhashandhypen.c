#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int line = n * 2 - 1;
    int space = n - 1;
    int symbol = 1;

    for (int i = 1; i <= line; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        if (i % 2 != 0)
        {
            for (int k = 1; k <= symbol; k++)
            {
                printf("#");
            }
        }
        else
        {
            for (int l = 1; l <= symbol; l++)
            {
                printf("-");
            }
        }

        printf("\n");

        if (i < n)
        {
            space--;
            symbol += 2;
        }
        else
        {
            space++;
            symbol -= 2;
        }
    }

    return 0;
}