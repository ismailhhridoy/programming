#include <stdio.h>

int main() {
    char ar[6];
    fgets(ar, 6, stdin);// 1 variable for null correcter \0;
    printf("%s", ar);
    return 0;
}