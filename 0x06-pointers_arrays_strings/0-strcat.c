#include "main.h"
/**
 * _strcat - a pointer to a char variable that concatenate two string
 * @dest: first string
 * @src: second string
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	j = 0;
	while (src[j])
	{
		dest[i++] = src[j];
		j++;
		i++;
	}
	return (dest);
}
