#include "main.h"
#include "unistd.h"

/**
 * _putchar - wrutes the character c to stdout
 * @c: the character to input
 * Return: on success 1
 * on error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
