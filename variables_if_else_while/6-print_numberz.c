#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Print numbers from 0 to 9 by using twice the putchar
 * fonction with no declaration of type char
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	/*Print from ASCII value of 0 and increment it*/
	for (i = 0 ; i < 10 ; i++)
		putchar('0' + i);

	/*Print a new line*/
	putchar('\n');

	return (0);
}
