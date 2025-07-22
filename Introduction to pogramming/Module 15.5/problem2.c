#include <stdio.h>

int my_len(char t[])
{

    int len = 0;

    for (int i = 0; t[i] != '\0'; i++)
    {
        len++;
    }
    
    
        

    return len;
}

int main()
{

    char s[100];

    scanf("%s", s);
    
    
    printf("%d", my_len(s));

    return 0;
}