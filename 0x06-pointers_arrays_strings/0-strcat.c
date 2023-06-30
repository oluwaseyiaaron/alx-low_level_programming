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
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0')
	{
		dest[i++] = src[j];
		j++;
	}
	return (dest);
}
