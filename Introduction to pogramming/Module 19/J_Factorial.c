#include <stdio.h>

long long int recur_fun(int n, int i)
{
    if (i > n)
    {
        return 1;
    }

    long long int fact = recur_fun(n, i + 1);
    return i*fact;
}

int main()
{
    int n;
    scanf("%d", &n);

    long long int ans = recur_fun(n, 1);
    printf("%lld", ans);


    // int fact = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     fact = i * fact;
    // }

    // printf("%d", fact);

    return 0;
}