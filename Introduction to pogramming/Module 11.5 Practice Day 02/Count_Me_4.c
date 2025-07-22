#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    char sa[10001];
    scanf("%s", sa);

    int freq[26] = {0};

    for (int i = 0; sa[i] != '\0'; i++)
    {
        freq[sa[i]- 'a']++;
    }
    
    for (int i = 0; i<26; i++)
    {
        if (freq[i]>0)
        {
            printf("%c - %d\n", 'a' + i, freq[i]);
        }
    }

    return 0;
}
