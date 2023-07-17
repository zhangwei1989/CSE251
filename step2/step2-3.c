#include <stdio.h>
#include <math.h>

/*
 * This is my first program in CSE 251
 */

int main() {
    double farad, henry, microfarads, microhenrys;

    printf("Input Capacitance (microfarads): ");
    scanf("%lf",&microfarads);

    printf("Input Inductance (microhenrys): ");
    scanf("%lf",&microhenrys);

    farad = microfarads / 1000000;
    henry = microhenrys / 1000;
    printf("farad is %f\n", farad);
    printf("henry is %f\n", henry);

    double multiValue;
    multiValue = farad * henry;
    printf("multiValue is %f\n", multiValue);

    double rlc, sqrtValue;

    sqrtValue = sqrt(farad * henry);
    printf("SqrtValue is %.10f\n", sqrtValue);

    rlc = (1 / sqrt(farad * henry)) / (2 * M_PI);
    printf("Resonant Frequency is %.10f\n", rlc);
}
