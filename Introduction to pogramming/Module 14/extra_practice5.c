#include <stdio.h>

void star_print(int count)
{

    for (int j = 0; j < count; j++)
    {
        printf("*");
    }
}

void space_print(int count)
{

    for (int j = 0; j < count; j++)
    {
        printf(" ");
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    for (int i = 0; i < n; i++)
    {
        space_print(space);
        star_print(star);
        printf("\n");
        star+=2;
        space -= 1;
    }
    
    star = n*2-1;
    space = 0;
    for (int i = 0; i < n; i++)
    {
        space_print(space);
        star_print(star);
        printf("\n");
        star-=2;
        space += 1;
    }

    return 0;
}