#include <stdio.h>

void fun()
{
    int ar[3];
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ar[i]); 
        printf("%d ", ar[i]); 
    }
       
       
}

int main() {
    

    fun();
    
    return 0;
}