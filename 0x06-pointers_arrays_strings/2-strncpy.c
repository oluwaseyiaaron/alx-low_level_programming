#include "main.h"
/**
 * _strncpy - to copy a string a n byte of one string(source) to another string(destination)
 * @dest: the destination string
 * @src: the source of the string
 * @n: the number of bytes to copy
 * Return: return a pointer the string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	/**intialise a variable I*/
	int i;

	i = 0;
	/*while i is less than the specified byte AND the src is has not reach the null terminator*/
	while (i < n && src[i] != '\0')
	{
		/*let the specified amount of the string from src be equal to the dest variale*/
		dest[i] = src[i];
		i++;
	}
	/* but if i is still less than the specified n byte after s[i] = '\0'*/
	while (i < n)
	{
		/*fill in the remaining n bytes with the '\0'*/
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
