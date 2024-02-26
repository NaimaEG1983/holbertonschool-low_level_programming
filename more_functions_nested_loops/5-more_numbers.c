#include"main.h"
/**
 * more_numbers - Print numbers from 0 to 9
 */
void  more_numbers(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			_putchar('0' + j);

		}
		for (j = 10 ; j < 15 ; j++)
		{
			_putchar('1');
			_putchar('0' + j % 10);

		}
		/*Print a new line*/
			_putchar('\n');
	}
}
