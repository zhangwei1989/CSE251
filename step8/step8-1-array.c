#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#include <stdio.h>

/*
 * Name : <zhangwei>
 * Program to experiment with hexadecimal
 * and pointers
 */

#define NumMovies 10
#define MaxGrosses 5

int main()
{

    double gross[NumMovies] = {4633070, 3856195, 3171189, 1877685, 3251622,
                               3156594, 1629735, 2659234, 2028036, 510768};
    char *names[NumMovies] = {"Hall Pass", "Unknown", "I Am Number Four", "The King's Speech",
                              "Just Go With It", "Gnomeo and Juliet", "Drive Angry",
                              "Justin Beiber: Never Say Never", "Big Mommas: Like Father, Like Son",
                              "True Grit"};
    double sum;
    int i;

    sum = 0;        /* Initialize to zero */
    for(i = 0;  i<NumMovies;  i++)
    {
        printf("Movie %2d %33s: %.0f\n", i+1, names[i], gross[i]);
        sum += gross[i];
    }
    printf("Total gross for these films was $%.0f\n", sum);

    int highestGrossIndex = 0;
    double highestGross = 0;

    for(i=0;  i<NumMovies;  i++)
    {
        if(gross[i] > highestGross)
        {
            highestGrossIndex = i;
            highestGross = gross[highestGrossIndex];
        }
    }

    printf("The highest grossing film is: %s\n", names[highestGrossIndex]);

    double maxGross[MaxGrosses] = {500000, 1000000, 2000000, 4000000, 10000000};

    int j, highestValueIndex;


    for (int i = 0; i < MaxGrosses; i++) {
        double highestValue;
        highestValue = 0;
        for (int j = 0; j < NumMovies; j++) {
            if (gross[j] < maxGross[i] && gross[j] > highestValue) {
                highestValue = gross[j];
                highestValueIndex = j;
            }
        }

        if (highestValue == 0) {
            printf("No film made less than %.0f\n", maxGross[i]);
        } else {
            printf("The highest gross less than %.0f is %0.f at %s\n", maxGross[i], highestValue, names[highestValueIndex]);
        }

    }
}
