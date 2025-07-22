#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int star = 2 * n - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }

        printf("\n");

        star -= 2;
    }

    return 0;
}