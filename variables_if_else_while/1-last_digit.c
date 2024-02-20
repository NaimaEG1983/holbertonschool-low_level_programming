#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*Include stdio.h to use printf function*/
#include <stdio.h>
/**
* main - Entry point
* This program will assign a random number to the variable n
* each time it is executed.
* It prints the last digit of n,
* and says it is greather than 5, less than 6 or equal to 0
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) > 5) /*n > 5*/
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);

	else
		if ((n % 10) == 0)  /*case n == 0*/
			printf("Last digit of %d is %d and is 0\n", n, n % 10);
		else /* case n < 6 ans n!= 0 */
			printf("Last digit of %d is %d and is less than 6 and not 0\n",
			 n, n % 10);
	return (0);
}
