#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Print all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	/*Print from ASCII value of 0 and increment it*/
	for (i = 0 ; i < 10 ; i++)
		putchar('0' + i);
	for (i = 0 ; i < 6; i++)
		putchar('a' + i);
	/*Print a new line*/
	putchar('\n');

	return (0);
}
