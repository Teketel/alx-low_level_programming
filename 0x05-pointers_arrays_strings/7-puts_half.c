#include "main.h"

/**
 * puts_half - prints half of a string.
 * @s: char pointer type
 * Description: If odd number of chars, print (length - 1) / 2
 * Return: void
 **/

void puts_half(char *s)
{
	int sLength;
	int i;

	for (sLength = 0; s[sLength] != '\0'; ++sLength)
		;
	sLength++;
	for (i = sLength / 2; i < sLength; i++)
		_putchar(s[i]);
	_putchar('\n');

}
