#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit = n[-1] ;
	
	if (last_digit > 5)
	{
	printf("Last digit of %d",n," is %d",last_digit," and is greater than 5\n")}
	else if (last_digit == 0){
	}
	printf("Last digit of %d",n," is %d",last_digit," and is 0\n")}
	else if(last_digit < 6 && last_digit != 0){
	}
	printf("Last digit of %d",n," is %d",last_digit," and is less than 6 and not 0\n")}
	return (0);
}
