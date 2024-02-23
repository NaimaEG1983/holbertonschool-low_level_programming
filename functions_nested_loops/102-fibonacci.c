#include<stdio.h>
/**
 * main - print the first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long n1, n2, sum;

	n1 = 1;
	n2 = 2;
	i = 2;

	printf("%lu, %lu, ", n1, n2);
	do	{
		sum = n1 + n2;
		i++;
		printf("%lu, ", sum);
		n1 = n2;
		n2 = sum;
	} while (i < 50);

	printf("%lu\n",n1 + n2);
	return (0);
}
