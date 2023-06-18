#include <stdio.h>
/**
 * main - Entry point
 *
 * to print uppercase and lowercase alphabets
 *
 * Return: return 0
 */
int main(void)
{
	/*for lowercase*/
	char c, u;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	/*for uppercase*/
	u = 'A';
	while (u <= 'Z')
	{
		putchar(u);
		u += 1;
	}
	putchar('\n');
	return (0);
}

