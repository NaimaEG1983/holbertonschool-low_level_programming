#include"main.h"
/**
 * _strncpy - copy n bytes fron src to dest pointers
 * @dest: string
 * @src: string to add
 * @n: n bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, l;

	while (src[i] != '\0')
	{
		i++;
	}
	l = i - 1;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	if (n > l)
	{
		for (i = l; i < n; i++)
			dest[i] = '\0';
	}
	return (dest);
}
