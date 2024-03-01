#include"main.h"
/**
 * _strlen - return length of ths string
 * @s: string
 * Return: length of the string s
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
