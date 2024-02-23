#include"main.h"
#include<stdio.h>
/**
 * jack_bauer - print hour from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hh, mn;

	for (hh = 0; hh < 24 ; hh++)
		for (mn = 0; mn < 60 ; mn++)
			printf("%02d:%02d\n", hh, mn);
}
