#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * to print lowercase alphabets in reverse
 *
 * Return: return 0
 */
int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
