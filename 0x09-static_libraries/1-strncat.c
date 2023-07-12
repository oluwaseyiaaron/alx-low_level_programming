#include "main.h"
/**
 * _strncat - to concatenate two strings with n bytes
 * @dest: source string
 * @src: destination string with n bytes
 * @n: number of bytes
 * Return: return a pointeer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

