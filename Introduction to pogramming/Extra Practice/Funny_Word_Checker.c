#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char word[101];
    scanf("%s", word);

    int len = strlen(word);

    if (len == 1 )
    {
        printf("Yes");
    }
    else
    {
        char temp;
        temp = word[0];
        word[0] = word[len - 1];
        word[len - 1] = temp;

        if (word[0] == word[len - 1])
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }

    return 0;
}
