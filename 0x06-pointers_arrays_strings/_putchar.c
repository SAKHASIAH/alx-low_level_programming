#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - print a character
 * @c: the argument to pass
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
