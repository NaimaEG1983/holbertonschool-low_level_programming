#include "main.h"

/**
 * main - Entry point
 * program that prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
 /**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{

	/*char tableC[9];
	*
	*tableC = "_putchar";
	*int i;

	*for (i = 0 ; i < 8 ; i++)
	*	_putchar(tableC[i]);
	*/
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	/*Print a new line*/
	_putchar('\n');

	return (0);
}
