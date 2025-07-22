#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int lines = 2 * n - 1;
    int spaces = n - 1;
    int symbols = 1;

    for (int i = 1; i <= lines; i++)
    {
        
        for (int j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        if (i % 2 != 0)
        {
            for (int j = 1; j <= symbols; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 1; j <= symbols; j++)
            {
                printf("-");
            }
        }

        printf("\n");

        if (i < n)
        {
            spaces--;
            symbols += 2;
        }
        else
        {
            spaces++;
            symbols -= 2;
        }
    }

    return 0;
}
