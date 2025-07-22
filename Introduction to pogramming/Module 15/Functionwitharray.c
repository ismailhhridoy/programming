#include <stdio.h>
void arr_fun(int x[], int y) // if we send array to function, it's pass by reference. Meaning it send location.
{
    x[1] = 10; 
    for (int i = 0; i < y; i++)
    {
        printf("%d ", x[i]); 
    }
}




int main()
{
    int n;
    scanf("%d", &n);  
    
    int ar[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &ar[i]); 
    }

    arr_fun(ar,n);
    

    return 0;
}