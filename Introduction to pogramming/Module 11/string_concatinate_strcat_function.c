#include <stdio.h>
#include <string.h>

int main() {
    char a[101];
    scanf("%s", a);

    char b[101];
    scanf("%s", b);

    strcat(a,b);
    
    printf("%s %s", a,b);

    return 0;
}