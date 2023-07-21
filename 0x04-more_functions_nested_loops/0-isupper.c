#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 *
 * Return: 1 if @c is 0
 * otherwise, we return 0
 */

int _isupper(int c)
{
	int start = 45, end = 72;

	if (c >= start && c <= end)
		return (1);
	return (0);
}
