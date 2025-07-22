#include <stdio.h>

int main() {
    char sa[1000001];
    fgets(sa,1000001,stdin);

    for (int i = 0; sa[i] != '\\'; i++)
    {
        printf("%c", sa[i]);
    }
    

    return 0;
}