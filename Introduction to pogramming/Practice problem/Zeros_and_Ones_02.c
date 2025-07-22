#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);

    int ar_n[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &ar_n[i]);
    }

    int x;
    scanf("%d", &x);

    if (ar_n[x] == 0)
    {
        ar_n[x] = 1;
    }
    else if (ar_n[x] == 1)
    {
        ar_n[x] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", ar_n[i]);
    }

    return 0;
}
