#include <stdio.h>
/**
 * main - Entry point
 *
 * description: to print all posible comination of two digits
 *
 * Return: return 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (b > a)
			{
				putchar('0' + a);
				putchar('0' + b);
				if (a != 9 || b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
