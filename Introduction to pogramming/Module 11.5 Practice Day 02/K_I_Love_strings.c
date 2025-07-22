#include <stdio.h>

int main() {
    int t; 
    scanf("%d", &t);

    for (int k = 0; k < t; k++) {
        char s[10001], t[10001];
        scanf("%s %s", s, t);

        int i = 0, j = 0;

        
        for (; s[i] != '\0' && t[j] != '\0'; i++, j++) {
            printf("%c%c", s[i], t[j]);
        }

        
        for (; s[i] != '\0'; i++) {
            printf("%c", s[i]);
        }

        
        for (; t[j] != '\0'; j++) {
            printf("%c", t[j]);
        }

        printf("\n"); 
    }

    return 0;
}
