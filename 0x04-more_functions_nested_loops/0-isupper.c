#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: input for alphabet
 *
 * Return: return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
