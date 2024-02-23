#include<stdio.h>
/**
 * main - print the first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned int n1, n2, sum;

	n1 = 1;
	n2 = 2;
	i = 2;

	printf("%d, %d, ", n1, n2);
	do	{
		sum = n1 + n2;
		printf("%u, ", sum);
		n1 = n2;
		n2 = sum;
		i++;
	} while (i < 50);
	sum = n1 + n2;
	printf("%u\n", sum);
	return (0);
}
