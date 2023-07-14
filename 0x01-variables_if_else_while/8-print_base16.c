#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: 0 (success).
 */
int main(void)
{
int d;
char alphabet;

for (d = 0; d < 10; d++)
putchar((d % 10) + '0');

for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
putchar(alphabet);

putchar('\n');

return (0);
}
