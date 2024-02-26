#include"main.h"
/**
 *  print_triangle- Draw a triangle of # caracters
 * @size : number of lines of the triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{	int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
				_putchar(' ');
			for (j = (size - i + 1); j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
