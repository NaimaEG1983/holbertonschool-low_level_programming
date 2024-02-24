#include<stdio.h>
/**
 * main - print the sum of even-values of first Fibonacci numbers under 4000000
 *
 * Return: 0
 */
int main(void)
{
	unsigned long n1, n2, sum, sumP;

	n1 = 1;
	n2 = 2;
	sumP  = n2;
	do	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		if (!(n2 % 2))
			sumP += n2;

	} while (n2 < 4000000);

	printf("%lu\n", sumP);
	return (0);
}
