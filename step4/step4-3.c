#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * This is my first program in CSE 251
 */

int main() {
    double angle, sinVal, spaceVal;
    int numSteps = 0;
    char symbol;

    while (numSteps < 2) {
        printf("Input the number of steps:");
        scanf("%d", &numSteps);
    }

    double maxAngle = M_PI * 2;
    int i;
    bool rising = true;

    for (int i = 0; i <= numSteps; i++) {
        angle = (double) i / (double) numSteps * maxAngle;
        sinVal = sin(angle);
        printf("%3d: %5.2f %6.3f", i, angle, sinVal);
        spaceVal = 60 + sinVal * 30;
        for (int j = 0; j < spaceVal; ++j) {
            printf(" ");
        }

        if (fabs(sinVal) == 1) {
            symbol = '*';
            rising = !rising;
        } else {
            if (rising) {
                symbol = '\\';
            } else {
                symbol = '/';
            }
        }

        printf("%c\n", symbol);
    }
}
