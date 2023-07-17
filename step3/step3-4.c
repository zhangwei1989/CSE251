#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * This is my first program in CSE 251
 */

int main() {
    int annualIncome, deductions, taxableIncome, filingStatus, childrenNum;
    double tax;

    printf("Enter your annual income: ");
    scanf("%d", &annualIncome);

    printf("What is your filing status? \n");
    printf("1) single \n");
    printf("2) married filing jointly \n");
    printf("3) married filing separately \n");
    printf("Please enter a number: ");
    scanf("%d", &filingStatus);

    if (filingStatus != 1 && filingStatus != 2 && filingStatus != 3) {
        printf("You entered a invalid filing status number, goodbye!");
        exit(1);
    }

    if (filingStatus == 2) {
        printf("How many children do you have?");
        scanf("%d", &childrenNum);

        deductions = 11400 + (2 + childrenNum) * 3650;
    } else {
        deductions = 5700 + 3650;
    }

    printf("deductions is %d\n", taxableIncome);

    taxableIncome = annualIncome - deductions;

    printf("taxableIncome is %d\n", taxableIncome);

    if (taxableIncome > 0 && taxableIncome <= 16750) {
        tax = 0 + taxableIncome * 0.1;
    } else if (taxableIncome > 16750 && taxableIncome <= 68000) {
        tax = 1675 + (taxableIncome - 16750) * 0.15;
    } else if (taxableIncome > 68000 && taxableIncome <= 137300) {
        tax = 9362.5 + (taxableIncome - 68000) * 0.25;
    } else if (taxableIncome > 137300) {
        tax = 26687.5 + (taxableIncome - 137300) * 0.28;
    } else {
        printf("Invalid tax!");
        exit(1);
    }

    printf("Your annual tax is : %.2f", tax);
}
