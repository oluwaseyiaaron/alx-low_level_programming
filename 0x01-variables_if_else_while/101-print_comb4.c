#include <stdio.h>
/**
 * main - Entry point
 *
 * todo - print all possible different combinations of three digits.
 *
 * Return: return 0
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = 1; b < 9; b++)
		{
			for (c = 2; c < 10; c++)
			{
					putchar('0' + a);
					putchar('0' + b);
					putchar('0' + c);
					if ((a == 7 && b == 8) && c == 9)
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
