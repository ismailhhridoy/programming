#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    scanf("%d", &n);

    char digits[n + 1];

    scanf("%s", digits);

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + (digits[i] - '0');
    }

    if (sum % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
