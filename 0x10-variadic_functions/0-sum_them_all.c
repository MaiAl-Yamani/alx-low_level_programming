#include <stdarg.h>
/**
 * sum_them_all - returns sum of all its parameters
 * @n: count of remaining arguments
 *
 * Return: int sum, 0 if n=0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
