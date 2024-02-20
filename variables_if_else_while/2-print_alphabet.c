#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Print the alphabet in lower case followed by new line
 * by using twice the function putchar
 * Return: Always 0 (Success)
 */
int main(void)
{

	/*Put the alphabet in the array tabl_alpha*/
	char tabl_alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for( i = 0; i < 27; i++)
		putchar(tabl_alpha[i]);
	/*Print a new line*/
	putchar('\n');

	return (0);
}
