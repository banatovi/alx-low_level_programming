#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of args passed
 * @separator: string to be printed between strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list params;

	va_start(params, n);
	if (n != 0)
	{
		for (j = 0; j < n; j++)
		{
			if (j != n - 1)
			{
				if (separator != NULL)
					printf("%s%s", make_nil(va_arg(params, char *)), separator);
				else
					printf("%s", make_nil(va_arg(params, char *)));
			}
			else
			{
				printf("%s", make_nil(va_arg(params, char *)));
			}
		}
	}
	printf("\n");
	va_end(params);
}

/**
 * make_nil - change s to be "(nil)" if s is null
 * @s: string to be used
 * Return: pointer to @s
 */

char *make_nil(char *s)
{
	if (s == NULL)
		s = "(nil)";

	return (s);
}
