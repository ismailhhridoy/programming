#include <stdio.h>

void even_index()
{
    
    int n;
    scanf("%d", &n);
    int num_ar[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num_ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (num_ar[i] % 2 == 0)
        {
            printf("Indexes are: %d, Even number: %d\n", i, num_ar[i]);
        }
    }
}

int main()
{


    even_index();
    

    return 0;
}