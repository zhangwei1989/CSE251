#include <stdio.h>
#include <math.h>

/*
 * This is my first program in CSE 251
 */

int main() {
    double radius = 7.88;
    double height = 12.231;

    int wins = 10;
    int losses = 100;

    double volume, diameter, hypot;
    int games;

    volume = radius * radius * M_PI * height;
    games = wins + losses;

    double near = 10;
    double far = 22.5;

    hypot = sqrt(near * near + far * far);

    double bottleVolume = 1700;
    double cupVolume = 350;
    int numCups;

    numCups = (int) (bottleVolume / cupVolume);
    printf("Number of cups: %d\n", numCups);

    printf("The cylinder has a radius of %-10.2f and a height of %+8.1f\n", radius, height);
    printf("MSU had an %d-%d season in 2010!", wins, losses);
}
