/**
 * @file sum_of_two_numbers.c
 * @brief Program to calculate the sum of two numbers
 * @details This program takes two integer inputs from the user and calculates
 * their sum.
 * @github: https://www.github.com/awesomelewis2007/examples
 */

#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum = %d", sum);
    printf("\n");
    return 0;
}
