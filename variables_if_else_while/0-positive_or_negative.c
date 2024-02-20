#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*Include stdio.h to use printf function*/
#include <stdio.h>

/* betty style doc for function main goes there
 *
 * This program will assign a random number to the variable n each time it is executed.
 * It prints whether the number stored in the variable n is positive or negative.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		{
			printf("%d is positive\n",n);
		}
	else if (n < 0)
			{
				printf("%d is negative\n",n);
			}
		else /* n==0 */
			{
				printf("%d is zero\n",n);
			}

	return (0);
}
