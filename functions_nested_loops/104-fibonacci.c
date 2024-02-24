#include<stdio.h>
/**
 * main - print the first 98 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, n1_firstdigits, n2_firstdigits, bigFibo_firstdigits;
	unsigned long n1, n2, sum, n1_lastdigits, n2_lastdigits, bigFibo_lastdigits;

	n1 = 1;
	n2 = 2;
	i = 3;

	printf("%lu, %lu, ", n1, n2);
	while (i < 93)
	{
		sum = n1 + n2;
		printf("%lu, ", sum);
		n1 = n2;
		n2 = sum;
		i++;
	}
	n1_firstdigits = n1 / 1000000000000; /*gets the 7 first digits*/
	n1_lastdigits = n1 % 1000000000000;  /*gets the 12 last digits*/
	n2_firstdigits = n2 / 1000000000000; /*gets the 8 first digits*/
	n2_lastdigits = n2 % 1000000000000;  /*gets the 12 last digits*/
	for (i = 93; i <= 98; i++)
	{
		bigFibo_firstdigits = n1_firstdigits + n2_firstdigits;
		bigFibo_lastdigits = n1_lastdigits + n2_lastdigits;
		if (bigFibo_lastdigits > 999999999999)
			bigFibo_firstdigits += 1;
		printf("%d%lu", bigFibo_firstdigits, bigFibo_lastdigits);
		if (i < 98)
			printf(", ");
		n1_firstdigits = n2_firstdigits;
		n1_lastdigits = n2_lastdigits;
		n2_firstdigits = bigFibo_firstdigits;
		n2_lastdigits = bigFibo_lastdigits;
	}
	printf("\n");
	return (0);
}
