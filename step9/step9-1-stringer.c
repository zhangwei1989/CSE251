#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


/*
 * Name : <Zhang Wei>
 * Program to experiment with strings
 * @TODO To figure out why sentence needn't to be typed.
 */

int StringLength(char str[]);
void PrintLength(char str[]);

int main()
{
    char word[] = "chudge";
    char myWord[80];
    char mySentence[80];
    int i, len;

    printf("Enter a word: ");
    scanf("%79s", myWord);
    myWord[79] = '\0';
    printf("The entered word is: %s\n", myWord);

    printf("Enter a sentence: ");
    fgets(mySentence, 80, stdin);
    len = strlen(mySentence);
    mySentence[len - 1] = '\0';
    printf("The entered sentence is: %s\n", mySentence);

    PrintLength(word);
    PrintLength(myWord);
    PrintLength(mySentence);
}

int StringLength(char str[])
{
    int numChars = 0;

    while(str[numChars] != '\0')
    {
        numChars++;
    }

    return numChars;
}

void PrintLength(char str[])
{
    printf("The string %s is %lu characters long\n", str, strlen(str));
}
