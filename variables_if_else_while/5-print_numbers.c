#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Print numbers from 0 to 9 followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		printf("%d", i);
	/*Print a new line*/
	putchar('\n');

	return (0);
}
