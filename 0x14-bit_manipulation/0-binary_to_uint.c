#include "main.h"

/**
 * binary_to_uint - conversion of a binary no.to
 * an unsigned int.
 *
 * @b: points to a string containing a binary
 * number
 *
 * Return: unsigned int with decimal value of
 * binsry number, or 0 if error.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
