#include "main.h"

/**
 * *_strcat -  concatenates two strings.
 * @dest: char array pointer type
 * @src: char array pointer type
 * Description: appends the src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest, and then adds a
 * terminating null byte
 *
 * Return: char array pointer type. pointer to the resulting string dest.
 **/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
