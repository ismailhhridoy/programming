#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    char s[100001];
    scanf("%s", s);

    char va[6] = {'a', 'e', 'i', 'o', 'u', '\0'};

    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        int is_va = 0;
        for (int j = 0; va[j] != '\0'; j++)
        {
            if (s[i] == va[j])
            {
                is_va = 1;
                break;
            }
        }

        if (is_va == 0)
        {
            count++;
        }
        
    }

    printf("%d", count);

    return 0;
}
