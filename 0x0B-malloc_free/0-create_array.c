#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: size of bytes of the array
 * @c: the char array
 * Return: Returns a pointer to the array
 * or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	if (arr == 0)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
