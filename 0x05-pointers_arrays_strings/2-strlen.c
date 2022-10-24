#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a str
 * @s : string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
