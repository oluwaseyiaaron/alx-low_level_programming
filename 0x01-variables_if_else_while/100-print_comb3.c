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

	for (a = 0; a < 9; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (b > a)
			{
				putchar('0' + a);
				putchar('0' + b);
				if (a == 8 || b == 10)
					continue;
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
