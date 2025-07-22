#include <stdio.h>

int main() {
    char ds[1000001];
    scanf("%s", ds);

    int sum = 0;
    
    for (int i = 0; ds[i] != '\0'; i++)
    {
        
        sum= sum + ds[i]-'0';//48 //convert to decimal by using ASCII concept
    }
    
    printf("%d", sum);

    return 0;
}