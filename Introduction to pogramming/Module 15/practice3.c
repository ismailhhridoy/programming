#include <stdio.h>

void fun(int ar[])
{
    
    for (int i = 2; i >= 0; i--)
    {
        printf("%d ", ar[i]); 
    }
       
}

int main() {
    
    int ar[3];
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ar[i]);
    }

    fun(ar);
    
    return 0;
}