#include "main.h"
/**
 * _islower - function to check if its lower or upper case
 *
 * @c: checks input of function
 *
 * Return: return 1 if its lowerrcase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
