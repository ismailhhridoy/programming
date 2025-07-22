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
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar_n[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (ar_n[i] > max)
        {
            max = ar_n[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", max - ar_n[i]);
    }
    
    return 0;
}
