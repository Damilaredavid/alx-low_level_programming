#include "main.h"
/**
 * _memcpy - function copies from memory area @src to memory area @dest
 *
 * @src: memory area bytes
 *
 * @dest: memory area desination
 *
 * @n: function copies
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
