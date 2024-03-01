#include"main.h"
/**
 * puts_half - print the second half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int i = 0;
	int l;

	while (str[i] != '\0')
	{
		i++;
	}

	l = i;
	if (l % 2)
		l += 1;
	for (i = l / 2; i < l; i++)
		_putchar(str[i]);

	_putchar('\n');
}
