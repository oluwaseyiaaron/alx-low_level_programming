#include <stdarg.h>
#include "variadic_function.h"
/**
 * sum_them_all -  to sum all the parameters
 * @n: an unsigned integer variable
 * Return: return 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
