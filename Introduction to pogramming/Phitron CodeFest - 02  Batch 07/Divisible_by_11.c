#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);

    int len = strlen(str);

    int odd_sum = 0;

    for (int i = len-1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            odd_sum= odd_sum + (str[i]-'0');
        }
    }

    

        printf("%d", odd_sum);

    return 0;
}