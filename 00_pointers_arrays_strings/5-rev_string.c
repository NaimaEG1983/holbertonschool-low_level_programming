#include"main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i > j)
	{
		tmp = s[j];
		s[j] = s[--i];
		s[i] = tmp;

		j++;
	}

}
