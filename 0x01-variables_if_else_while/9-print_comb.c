#include <stdio.h>
/**
 * main - Entry point
 *
 * to print digits with a comma
 *
 * Return: return 0
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar('0' + num);
		num++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
