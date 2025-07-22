#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int star=0;
    int space=n-1;


    for (int i = 0; i < n; i++)
    {   
        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j <= star; j++)
        {
            printf("*");
        }       

        printf("\n");

        space--;
        star+=2;
    }
    

    return 0;
}