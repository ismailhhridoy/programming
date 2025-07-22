#include <stdio.h>
#include <string.h>

int main() {
    char a[101];
    scanf("%s", a);

    char b[101];
    scanf("%s", b);

    for (int i = 0; i <= strlen(b); i++)
    {
        a[i]=b[i];
    }
    
    printf("%s %s", a,b);

    return 0;
}