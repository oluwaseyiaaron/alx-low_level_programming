#include <stdio.h>
/**
 * main - Entry point
 *
 * print numbers in base 16 in lowercase
 *
 * Return: return 0
 */
int main(void)
{
	int num;
	int alpha;

	num = 0;
	alpha = 'a';
	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
