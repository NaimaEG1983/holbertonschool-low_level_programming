#include"main.h"
/**
 * print_square - Draw a square of # caracters
 * @size : number of # per line
 */
void print_square(int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}


