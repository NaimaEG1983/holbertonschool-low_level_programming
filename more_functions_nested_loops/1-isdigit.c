#include"main.h"
/**
 * _isdigit - Checks if a character is a digit between 0 and 9.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is uppercase.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
