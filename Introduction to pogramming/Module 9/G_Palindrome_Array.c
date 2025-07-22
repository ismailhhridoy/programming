#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int i = 0;
    int j = N - 1;

    int palindrome = 1;

    while (i < j)
    {
        if (A[i] != A[j])
        {
            palindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if (palindrome == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}