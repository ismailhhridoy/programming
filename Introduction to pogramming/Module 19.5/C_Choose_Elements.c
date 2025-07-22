#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] < ar[j])
            {
                int temp;
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        if (ar[i] > 0)
        {
            sum += ar[i];
        }
    }

    printf("%d", sum);

    return 0;
}