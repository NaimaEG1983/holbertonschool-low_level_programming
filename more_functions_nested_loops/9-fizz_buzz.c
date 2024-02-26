#include<stdio.h>
/**
 * main - print the numbers from 1 to 100 except for multiples of 3 and 5
 * for the multiples of 3 print Fizz
 * for the multiples of 5 print Buzz
 * for multiples of the both print FizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) && (i % 5))
			printf("%d", i);
		else
			{
				if (!(i % 3))
					printf("Fizz");
				if (!(i % 5))
					printf("Buzz");
			}
		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
