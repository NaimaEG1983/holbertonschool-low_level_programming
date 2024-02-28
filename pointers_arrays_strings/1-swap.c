#include"main.h"
/**
 * swap_int- Swap 2 pointers
 * @a: first pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int atemp;

	atemp = *a;
	*a = *b;
	*b = atemp;
}
