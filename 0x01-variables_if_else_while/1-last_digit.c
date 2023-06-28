#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point for the program
 *
 * Description: This program generates a random number and prints its
 *              last digit along with a message indicating whether it
 *              is greater than 5, less than 6 and not 0, or 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of %d is ", n);
/* Get the last digit of n */
last_digit = n % 10;
if (n < 0)
{
last_digit = -1 * last_digit;
}
/* Print the last digit of n */
printf("%d ", last_digit);
if (last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
