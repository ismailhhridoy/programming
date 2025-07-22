#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) // input a
        {
            scanf("%d", &a[i]);
        }

        int b[n];
        for (int i = 0; i < n; i++) // copy b
        {
            b[i] = a[i];
        }

        for (int i = 0; i < n; i++) // ascending b
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] > b[j])
                {
                    int temp;
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        int c[n]; // c array
        for (int i = 0; i < n; i++)
        {

            c[i] = a[i] - b[i];
            if (c[i] < 0)
            {
                c[i] = -c[i];
            }
            printf("%d ", c[i]);
        }

        printf("\n");
    }

    return 0;
}