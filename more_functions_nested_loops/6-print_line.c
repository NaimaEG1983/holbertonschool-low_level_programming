#include"main.h"
/**
 *  print_line - draw a straight line with n underscores
 * @n : number of underscores to put
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n && n > 0 ; i++)
		_putchar('_');

	_putchar('\n');
}
