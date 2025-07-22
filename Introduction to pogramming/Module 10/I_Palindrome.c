#include <stdio.h>

int main()
{
    char str[1001];
    scanf("%s", str);

    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    char reversed[1001];

    for (int i = 0; i < length; i++)
    {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';

    // Step 3: Compare original and reversed strings
    int isPalindrome = 1;
    for (int i = 0; i < length; i++)
    {
        if (str[i] != reversed[i])
        {
            isPalindrome = 0;
            break;
        }
    }

    // Step 4: Output result
    if (isPalindrome == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
