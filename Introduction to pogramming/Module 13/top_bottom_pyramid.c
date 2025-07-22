#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int line = n * 2 - 1;

    int star = 0;
    int space = n - 1;

    for (int i = 0; i < line; i++)
    {
        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }

        for (int j = 0; j <= star; j++)
        {
            printf("*");
        }

        if (i< n-1)
        {
            space--;
            star += 2;
        }
        else
        {
            space++;
            star -= 2;
        }

        printf("\n");
    }

    return 0;
}