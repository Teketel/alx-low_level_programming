#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char pointer type
 *
 * Return: void
 **/

void rev_string(char *s)
{
	int sLength;
	int i;

	for (sLength = 0; s[sLength] != '\0'; sLength++)
		;
	for (i = sLength - 1; i >= sLength / 2; i--)
	{
		char tmp = s[(sLength - 1) - i];

		s[(sLength - 1) - i] = s[i];
		s[i] = tmp;
	}

}
