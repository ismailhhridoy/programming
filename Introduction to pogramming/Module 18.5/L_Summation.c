#include <stdio.h>

long long sum_recursion_fun(long long int ar[], int n, int i)
{
    if (i == n) // base case to stop
    {
        return 0;
    }

    return ar[i] + sum_recursion_fun(ar, n, i + 1);

}

int main()
{

    // Taking input
    int n;
    scanf("%d", &n);
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }

    // Function Call
    printf("%lld", sum_recursion_fun(ar, n, 0));

    return 0;
}