#include <stdio.h>
/**
 * main - Entry point
 *
 * print of the alphebet except 'e' and 'q'
 *
 * Return: Return 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
