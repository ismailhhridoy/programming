#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int m;
        scanf("%lld", &m);

        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        long long int multip = (long long int) a * b * c;

        if (m % multip != 0)
        {
            printf("-1\n");
        }
        else
        {
            long long int ans = m / multip;

            printf("%lld\n", ans);
        }
    }


    return 0;
}