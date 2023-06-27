#include "main.h"
/**
 * print_rev - to print the string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	while (*s = '\0')
	{
		_putchar(*s + 0);
		--s;
	}
	_putchar('\n');
}
