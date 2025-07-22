#include <stdio.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Equal");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("a smaller");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("b smaller");
            break;
        }
        else if (a[i] < b[i])
        {
            printf("a smaller");
            break;
        }
        else if (b[i] < a[i])
        {
            printf("B smaller");
            break;
        }
        else if (a[i] == b[i])
        {
            i++;
        }
    }

    return 0;
}