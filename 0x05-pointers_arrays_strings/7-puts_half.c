#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int pab, n, i;

	pab = 0;

	while (str[pab] != '\0')
	{
		pab++;
	}

	if (pab % 2 == 0)
	{
		for (i = pab / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (pab % 2)
	{
		for (n = (pab - 1) / 2; n < pab - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
