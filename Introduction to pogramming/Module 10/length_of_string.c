#include <stdio.h>

int main() {
    // highest length is 100 and no space
    char la[101]; // extra 1 size for null corrector
    scanf("%s", la);
    
    int length_count=0;

    for (int i = 0; la[i]!='\0'; i++)
    {
        length_count++;
    }

    printf("%d", length_count);
    

    return 0;
}