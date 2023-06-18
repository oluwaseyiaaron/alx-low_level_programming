#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * to print lowercase alphabet
 *
 * Return: Return 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
