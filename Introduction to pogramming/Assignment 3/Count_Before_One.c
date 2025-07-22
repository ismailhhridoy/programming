#include <stdio.h>

int count_before_one(int ar[], int n)
{

    int count = 0;
    int i = 0;
    while (i < n && ar[i] != 1)
    {
        count++;
        i++;
    }

    return count;
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

    int ans = count_before_one(ar, n);

    printf("%d", ans);

    return 0;
}