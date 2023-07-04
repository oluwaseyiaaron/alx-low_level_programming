#include "main.h"
/**
 * _memcpy - to copy a memory
 * @dest: destination to copied to
 * @src: source t be copied from
 * @n: unsigned number bytes to copy
 * Return: Return a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
