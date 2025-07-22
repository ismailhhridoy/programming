#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{

    int value = 1;

    int len = strlen(s);

    for (int i = 0, j = len - 1; s[i] != '\0', i < j; i++, j--)
    {

        if (s[i] != s[j])
        {
            value = 0;
            break;
        }
    }

    return value;
}

int main()
{
    char s[1001];
    scanf("%s", s);

    int value = is_palindrome(s);


    if (value == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}