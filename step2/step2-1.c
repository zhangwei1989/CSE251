#include <stdio.h>
#include <math.h>

/*
 * This is my first program in CSE 251
 */

int main() {
    double radius = -7.88;
    double height = -12.231;

    int wins = 10;
    int losses = 100;

    printf("The cylinder has a radius of %-10.2f and a height of %+8.1f\n", radius, height);
    printf("MSU had an %d-%d season in 2010!", wins, losses);
}
