#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Print the alphabet in lower , after in upper case followed by new line
 * by using twice the function putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z' ; c++)
		putchar(c);
	/*Print a new line*/
	putchar('\n');

	return (0);
}
