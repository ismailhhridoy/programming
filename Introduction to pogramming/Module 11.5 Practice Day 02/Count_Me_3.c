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
        
        char sa[10001];
        scanf("%s", sa);

        int cap_l = 0, small_l = 0, digits = 0;

        for (int j = 0; sa[j] != '\0'; j++)
        {
            if (sa[j] >= 'A' && sa[j] <= 'Z')
            {
                cap_l++;
            } else if (sa[j] >= 'a' && sa[j] <= 'z')
            {
                small_l++;
            }else if (sa[j] >= '0' && sa[j] <= '9')
            {
                digits++;
            }
            
        }

        printf("%d %d %d\n", cap_l, small_l, digits);
    }

    return 0;
}
