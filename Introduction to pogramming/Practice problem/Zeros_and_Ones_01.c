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
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar_n[i]);
        // printf("%d", ar_n[i]);
    }

    int count0 = 0;
    int count1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (ar_n[i] == 0)
        {
            count0++;
        }
        else if (ar_n[i] == 1)
        {
            count1++;
        }
    }

    printf("%d %d", count0, count1);

    return 0;
}
