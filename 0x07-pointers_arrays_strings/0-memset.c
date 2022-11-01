#include "main.h"                                                                                                   
/**
 *  * _memset - Fills the first n bytes of the memory area
 *  @s: memory area to fill
 *  @b: constant byte to fill
 *  @n: bytes of memory area to fill
 *  Return: the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
		*ptr++ = b;
	return (s);
}
