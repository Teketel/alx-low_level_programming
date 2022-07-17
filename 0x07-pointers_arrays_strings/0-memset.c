#include "main.h"

/**
 * _memset -  fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @n: int type.
 * @s: char pointer (string) type
 * @b: char type
 * Return: char pointer (string) type
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
