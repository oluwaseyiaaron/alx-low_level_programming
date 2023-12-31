#include "main.h"
/**
 * _memset - to fill a memory with constant byte
 * @s: first string of the memory to be filled
 * @b: the memory doing the filing
 * @n: number of bytes to be filled
 * Return: return a pointer to @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
