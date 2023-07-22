#include "main.h"

/**
 * print_line - makes a straight line
 * @n: number of times the line is to be printed
 * Description: Can only use _putchar to print
 * Return: None.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
