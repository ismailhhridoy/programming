#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        return 0;
    }

    int top_lines = 5 + (n + 1) / 2;
    int max_stars = 2 * top_lines - 1;

    for (int i = 0; i < top_lines; i++)
    {
        int stars = 2 * i + 1;
        int spaces = (max_stars - stars) / 2;
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    int bottom_lines = 5;
    int bottom_stars = n;
    int bottom_spaces = (max_stars - bottom_stars) / 2;
    for (int i = 0; i < bottom_lines; i++)
    {
        for (int j = 0; j < bottom_spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < bottom_stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
