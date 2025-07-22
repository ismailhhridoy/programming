// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

// Print the minimum number followed by a single space then print the maximum number.

#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    // minimum
    if (A <= B && A <= C)
    {
        printf("%d ", A);
    }
    else if (B <= A && B <= C)
    {
        printf("%d ", B);
    }
    else if (C <= A && C <= B)
    {
        printf("%d ", C);
    }

    // maximum
    if (A >= B && A >= C)
    {
        printf("%d", A);
    }
    else if (B >= A && B >= C)
    {
        printf("%d", B);
    }
    else if (C >= A && C >= B)
    {
        printf("%d", C);
    }

    return 0;
}