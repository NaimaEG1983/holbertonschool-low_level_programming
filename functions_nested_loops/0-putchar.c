#include <unistd.h>
#include main.h*/

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
	int i;
	char tableC[9];

	tableC = "_putchar";

	for (i = 0 ; i < 9 ; i++)
		_putchar(tableC[i]);

	/*Print a new line*/
	_putchar('\n');

	return (0);
}
