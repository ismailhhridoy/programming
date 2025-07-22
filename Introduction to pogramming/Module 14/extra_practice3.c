#include <stdio.h>

void digit_printing(int x)
{

    if (x > 0)
    {
        for (int i = x; i >= -x; i--)
        {
            printf("%d,", i);
        }
    }
    else
    {
        for (int i = x; i <= -x; i++)
        {
            printf("%d ", i);
        }
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    digit_printing(n);

    return 0;
}