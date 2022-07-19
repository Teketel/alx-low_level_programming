#include <stddef.h>
#include "main.h"


/**
 * _strchr - locates a character in a string
 * @s: string type
 * @c: char type
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 **/

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *firstOccurance;

	firstOccurance = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			firstOccurance = s + i;
			break;
		}
	}

	return (firstOccurance);
}
