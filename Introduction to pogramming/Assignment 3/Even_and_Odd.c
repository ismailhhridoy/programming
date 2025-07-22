#include <stdio.h>

void odd_even()
{

    int n;
    scanf("%d", &n);

    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }

    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("%d %d", even_count, odd_count);
}

int main()
{

    odd_even();
    return 0;
}