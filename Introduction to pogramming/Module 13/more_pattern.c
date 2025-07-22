#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int val = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= val; k++)
        {
            printf("%d", k);
        }

        printf("\n");

        val++;
    }

    return 0;
}