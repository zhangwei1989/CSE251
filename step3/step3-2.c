#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
 * This is my first program in CSE 251
 */

int main() {
    double farad, henry, microfarads, microhenrys;

    printf("Input Capacitance (microfarads): ");
    scanf("%lf",&microfarads);

    if (microfarads < 0) {
        printf("You moron, you entered a negative inductance!\\n");
        exit(0);
    }

    printf("Test exit or not");
}
