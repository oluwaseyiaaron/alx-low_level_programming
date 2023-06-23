#include "main.h"
/**
 * _isalpha - checks if its a lowercase or uppercase
 *
 * @c: takes input from other functions.
 *
 * Return: return 1 if true or else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
