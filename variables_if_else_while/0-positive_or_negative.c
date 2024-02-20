#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*Include stdio.h to use printf function*/
#include <stdio.h>

/**
* main - Entry point
* This program will assign a random number to the variable n
* each time it is executed.
* It prints whether the number stored in the variable n is
* positive or negative.
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*case n positive*/
	if (n > 0)
		printf("%d is positive\n", n);

	else
		if (n < 0)  /*case n negative*/
			printf("%d is negative\n", n);
		else /* case n==0 */
			printf("%d is zero\n", n);

	return (0);
}
