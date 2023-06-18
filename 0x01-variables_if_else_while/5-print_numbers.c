#include <stdio.h>
/**
 * main - Entry point
 *
 * prints all the numbers less than 10
 *
 * Return: Return 0
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
