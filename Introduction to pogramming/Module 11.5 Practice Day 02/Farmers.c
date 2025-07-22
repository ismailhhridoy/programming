#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int new_d = (m1 * d) / (m1 + m2);
        int few_d = d - new_d;
        printf("%d\n", few_d);
    }

    return 0;
}
