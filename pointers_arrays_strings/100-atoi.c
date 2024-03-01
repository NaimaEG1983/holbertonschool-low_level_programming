#include"main.h"
/**
 * puissance10 - returns the result of 10 power n
 * @n: exposant of 10
 * Return: an integer
 */
int puissance10(int n)
{
	int res = 1, i;

	if (n > 0)
	{
	for (i = 1; i <= n; i++)
		res *= 10;
	}

	return (res);
}
/**
 * _atoi - returns the integer included in a string
 * @s: pointer to the string
 * Return: an integer
 */
int _atoi(char *s)
{
	int i = 0, deb = -1, fin = 0, moins = 0, res = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			moins++;
		if (s[i] >= '0' && s[i] <= '9' && deb < 0)
		{
			if (deb < 0)
				deb = i;
			do {
				i++;
				fin = i;
			} while ((s[i] != '\0') && (s[i] >= '0') && (s[i] <= '9') && fin);
			break;
		}
		i++;
	}

	fin--;

	for (i = deb; i <= fin; i++)
		res += puissance10(fin - i) * ((s[i] - '0'));
	if (moins % 2)
		res *= (-1);

	return (res);
}

