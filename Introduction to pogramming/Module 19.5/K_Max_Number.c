#include <stdio.h>

int recur_fun(int ar[], int n, int i)
{

    if (i == n-1)
    {
        return ar[i];
    }

    int max = recur_fun(ar, n, i + 1);
    if (max >= ar[i])
    {
        return max;
    }
    else
    {
        return ar[i];
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int ans = recur_fun(ar, n, 0);
    printf("%d", ans);

    return 0;
}