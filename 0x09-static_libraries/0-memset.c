#include "main.h"                                                                                                   
/**
 *  * _memset - Fills the first n bytes of the memory area
 *  @s: memory area
 *  @b: constant byte
 *  @n: bytes to fill
 *  Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
