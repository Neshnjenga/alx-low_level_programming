#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, pab, pab1;

	pab = 0;
	pab1 = 0;

	while (s[pab] != '\0')
	{
		pab++;
	}

	pab1 = pab - 1;

	for (i = 0; i < pab / 2; i++)
	{
		tmp = s[i];
		s[i] = s[pab1];
		s[pab1--] = tmp;
	}
}
