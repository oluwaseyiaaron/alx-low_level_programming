#include <stdio.h>
/**
 * main - Entry point
 *
 * prints number from lower than 10 with putchar
 *
 * Return: Return 0
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
