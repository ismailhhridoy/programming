#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    printf("%d , So ", strcmp(a, b));
    int val = strcmp(a, b);

    if (val < 0)
    {
        printf("A small");
    }
    else if (val > 0)
    {
        printf("B small");
    }
    else
    {
        printf("Equal");
    }

    return 0;
}