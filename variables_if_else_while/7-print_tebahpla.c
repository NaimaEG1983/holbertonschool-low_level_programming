#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Print the alphabet from 'z' to 'a'
 * by using twice the function putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a' ; c--)
		putchar(c);

	/*Print a new line*/
	putchar('\n');

	return (0);
}
