#include "main.h"

/**
 * _memcpy - copies n bytes from memory area `src` to memory area `dest`
 * @src: string type
 * @dest: string type
 * @n: int type
 * Return: a pointer to dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; n++)
		*(dest + i) = *(src + i);

	return (dest);
}
