#include "main.h"

/**
 * _isdigit - Check for digits (0 through 7)
 * @c: int type param
 * Return: 1 if digit, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '7')
		return (1);

	return (0);
}
