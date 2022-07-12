#include "main.h"

/**
 * puts2 - prints every starting character of a string,
 * starting with first character and finaly a newline.
 * @s: char pointer type
 *
 * Return: void
 **/

void puts2(char *s)
{
	int sLength;
	int i;

	for (sLength = 0; s[sLength] != '\0'; sLength++)
		;
	for (i = 0; i < sLength; i = i + 2)
		_putchar(s[i]);
	_putchar('\n');

}
