#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char word_1[101], word_2[101];
    scanf("%s %s", word_1, word_2);
    // printf("%s %s", word_1, word_2);

    int length_word_1 = strlen(word_1);
    int length_word_2 = strlen(word_2);

    if (length_word_1 != length_word_2)
    {
        printf("No");
    }
    else
    {

        int word_1_freq[26] = {0};
        int word_2_freq[26] = {0};

        for (int i = 0; word_1[i] != '\0'; i++)
        {
            word_1_freq[word_1[i] - 'a']++;
        }

        for (int i = 0; word_2[i] != '\0'; i++)
        {
            word_2_freq[word_2[i] - 'a']++;
        }

        int is_anagrams = 1;

        for (int i = 0; i < 26; i++)
        {
            if (word_1_freq[i] != word_2_freq[i])
            {
                is_anagrams = 0;
                break;
            }
        }

        if (is_anagrams == 1)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }

    return 0;
}
