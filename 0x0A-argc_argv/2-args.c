#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: the arguments count
 * @argv: array of argument
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i;
	if (argc > 1)
	{
		i = 0;
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}

