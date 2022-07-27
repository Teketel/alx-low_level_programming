#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the length of string
 * @s: char pointer type;
 *
 * Return: int type the length of string.
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		++length;
	}
	return (length);
}
