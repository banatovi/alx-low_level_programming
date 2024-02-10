#include "main.h"

/**
* binary_to_uint - converts a binary to unsigned int
*
* @b: binary character array.
*
* Return: value of the decimal converted from binary.
*/
unsigned int binary_to_uint(const char *b);
{
	int j;
	unsigned int decimal_val = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[j] - '0');
	}

	return (decimal_val);
}
