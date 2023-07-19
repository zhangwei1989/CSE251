#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#include <stdio.h>

/*
 * Name : <Zhang Wei>
 * Program to experiment with character arrays
 */

#define MaxWord 20

int main ()
{
    char c;
    char str[MaxWord+1];
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
            /* The word is done */
            str[len] = 0;
            printf("%s\n", str);
            len = 0;
        }

    } while (c != '.');

    str[len] = 0;
    printf("%s\n", str);

}
