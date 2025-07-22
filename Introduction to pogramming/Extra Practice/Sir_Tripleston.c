#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    char s[78];
    scanf("%s", s);

    int freq[26]={0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i]-'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] == 2) {
            printf("%c\n", 'a' + i);
            break;
        }
    }
    
    return 0;
}
