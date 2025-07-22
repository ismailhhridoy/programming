#include <stdio.h>

int main() {
    char low_char;
    scanf("%c", &low_char);

    

    if (low_char>96 && low_char <122)
    {
        printf("%c", low_char+1);

    }
    
    if (low_char == 122)
    {
        printf("a");
    }
    
    
    return 0;
}