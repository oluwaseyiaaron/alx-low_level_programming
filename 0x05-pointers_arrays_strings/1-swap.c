#include "main.h"
/**
 * swap_int - to sawp the value of two int
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
