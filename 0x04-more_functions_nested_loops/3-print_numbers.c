#include "main.h"
/**
 * print_numbers - prints number 0-9
 * Return: return 0
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
