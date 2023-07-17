#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/*
 * Simple lunar lander program.
 * By:  <zhangwei>
 */

int main()
{
    printf("Lunar Lander - (c) 2012, by <zhangwei>\n");
    double altitude = 100;  /* Meters */
    double velocity = 0;    /* Meters per second */
    double fuel = 100;      /* Kilograms */
    double power = 1.5;     /* Acceleration per pound of fuel */
    double g = -1.63;       /* Moon gravity in m/s^2 */
    double burn;            /* Amount of fuel to burn */
    int seconds;

    while(altitude > 0) {
        printf("Altitude: %.2f\n", altitude);
        printf("Velocity: %.2f\n", velocity);
        printf("You have %.2f kilograms of fuel\n", fuel);

        bool valid;

        do {
            valid = false;

            printf("How much fuel would you like to burn: ");
            scanf("%lf", &burn);

            if(burn < 0)
            {
                printf("You can't burn negative fuel\n");
            }
            else if(burn > 5)
            {
                printf("You can't burn more than 5 kilograms per second\n");
            }
            else if(burn > fuel)
            {
                printf("You can't burn fuel you don't have\n");
            }
            else
            {
                printf("Burning %.1f kilograms of fuel\n", burn);
                valid = true;
            }
        } while (!valid);

        velocity = velocity + g + power * burn;
        altitude += velocity;
        fuel -= burn;

        seconds++;
    }

    printf("You landed with a velocity of %.2f\n", velocity);
    printf("You landed using %d seconds\n", seconds);
    printf("You have %.2f kilograms of fuel left\n", fuel);

    if(fabs(velocity) > 3)
    {
        printf("Your next of kin have been notified\n");
    }
}