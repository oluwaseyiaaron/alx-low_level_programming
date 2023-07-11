#include <stdlib.h>
#include "main.h"
/**
 * str_concat - to concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	s = malloc((len1 * sizeof(char)) + ((len2 + 1) * sizeof(char)));

	if (s == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
