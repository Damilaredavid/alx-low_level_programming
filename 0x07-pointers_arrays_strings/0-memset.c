#include "main.h"
/*
 * _memset - function fills @n a block of memory with a specific value
 *
 * @s: address of memory to be fillled
 *
 * @b: desired value
 *
 * @n: number of bytes to be changed
 *
 * Return: change array to the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
{
	s[i] = b;
	i++;
}

return (s);
	}
