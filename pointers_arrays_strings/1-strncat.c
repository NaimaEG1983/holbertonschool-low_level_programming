#include"main.h"
/**
 * _strncat - concatenate two strings on n bytes
 * @dest: string to be concatened
 * @src: string to add
 * @n: n bytes to copy
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
