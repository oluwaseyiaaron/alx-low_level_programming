#include "main.h"
/**
 * print-alphabet - prints alphabet in lowercase
 */
void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i < 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
