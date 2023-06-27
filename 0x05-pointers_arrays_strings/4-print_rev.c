#include "main.h"
/**
 * print_rev - to print the string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; ++index)

	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
