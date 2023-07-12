#include "main.h"
/**
 * _strncpy - to copy a string a n byte of a string
 * @dest: the destination string
 * @src: the source of the string
 * @n: the number of bytes to copy
 * Return: return a pointer the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
