#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

/*
 * Name : <Zhang Wei>
 * Program to experiment with character arrays
 */

#define MaxWord 20

int main ()
{
    char c;
    char str[MaxWord+1];
    char longestWord[MaxWord+1];
    int sumLength = 0;
    int wordCount = 0;
    int longestLength = 0;
    int len = 0;

    puts ("Enter text. Include a dot ('.') to end a sentence to exit:");
    do
    {
        c=getchar();

        if(c != ' ' && c != '.')
        {
            /* This is a character of a word */
            /* Only save it if we have space */
            if(len < MaxWord)
            {
                str[len] = c;
                len++;
            }
        }
        else
        {
            while (c == ' ') {
                c=getchar();
            }

            /*if (c == '.') {

                break;
            } else {
                str[len] = 0;
                printf("%s\n", str);

            }*/

            /* The word is done */
            str[len] = 0;
            printf("%s\n", str);

            /* Compute The relative length of  words */
            sumLength += len;
            wordCount++;

            if (len > longestLength) {
                longestLength = len;
                for (int i = 0; i < len; i++) {
                    longestWord[i] = str[i];
                }
            }

            if (c != '.') {
                len = 0;
                str[len] = c;
                len++;
            }

        }

    } while (c != '.');

    /* Print the average word length */
    printf("The average word length is %.2f\n", (double) sumLength / wordCount);

    /* Print the longest word length */
    printf("the longest word length is %d\n", longestLength);

    /* Print the longest word */
    printf("the longest word is %s\n", longestWord);

}
