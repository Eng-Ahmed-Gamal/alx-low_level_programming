#include <stdlib.h>
#include <time.h>
/* more headers goes there*/
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry point for the program
 *
 * Description: This program generates a random number and prints whether
 *              it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("%d", n)
if (n > 0)
{
printf("is positive");	
}
else if (n == 0)
{
printf("is zero");
}
else
{
printf("is negative");
}
return (0);
}
