#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * to print the last digit of the number stored in the variable n.
 *
 * Return: Return 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit = n % 10;
	if (digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	}
	else if (digit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, digit);
	}
	else if (digit < 6 && digit != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	}
	return (0);
}
