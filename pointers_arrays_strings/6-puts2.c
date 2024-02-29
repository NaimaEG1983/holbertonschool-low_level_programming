#include"main.h"
/**
 * puts2 - print a string even caracters
 * @str: string to print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!(i % 2))
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
