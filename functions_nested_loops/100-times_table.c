#include"main.h"
/**
 * print_times_table - print the n times table (n*n)
 * @n : the value of the times table to print
 */
void print_times_table(int n)
{
	if (n <= 15)
	{
		int i, j, m, md, mu, mc;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				m = i * j;
				mc = m / 100;
				md = (m % 100) / 10;
				mu = m % 10;
				_putchar(',');
				_putchar(' ');
				if (mc)
					_putchar('0' + mc);
				else
					_putchar(' ');
				if (md || mc)
					_putchar('0' + md);
				else
					_putchar(' ');
				_putchar('0' + mu);
			}
			_putchar('\n');
		}
	}
}
