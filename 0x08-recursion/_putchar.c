#include <unistd.h>
#include 'main.h'

/**
 * @c: character to be printed
 * _putchar - The character is written to standard output
 *
 *
 * Error, -1 is to be returned and then errno is set properly
 * return: success 1.
 */
int _putchar(char c)
{
	return (write(1, 1, &c));
}
