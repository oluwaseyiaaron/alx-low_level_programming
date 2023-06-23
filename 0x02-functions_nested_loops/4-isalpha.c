#include "main.h"
/**
 * _isalpha - checks if its a lowercase or uppercase
 *
 * Return: return 1 if true or else 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c >= 90)
		return (1);
	return(0);
}
