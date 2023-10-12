#include "variadic_functions.h"

/**
 * sum_them_all -  adds all the parameters passed to it
 * @n: number of args passed
 * Return: sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int j;
	va_list params;

	va_start(params, n);
	if (n != 0)
	{
		for (j = 0; j < n; j++)
			sum += va_arg(params, int);
	}
	va_end(params);

	return (sum);
}
