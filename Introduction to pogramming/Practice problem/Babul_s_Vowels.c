#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    char letter;
    scanf("%c", &letter);

    // char letter_ar[26];
    char vowel_ar[5] = {'a', 'e', 'i', 'o', 'u'};

    int is_vowel=0;

    for (int i = 0; i < 5; i++)
    {
        if (letter == vowel_ar[i])
        {
            is_vowel=1;
            break;
        }
    }

    if (is_vowel == 1)
    {
        printf("Vowel");

    }else{
        printf("Consonant");
    }
    
    
    return 0;
}
