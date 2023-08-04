#include <stdio.h>

/**
 * main - prints the no. of arguments passed into it
 * @argc: count (argument)
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%i\n", argc - 1);
	return (0);
}
