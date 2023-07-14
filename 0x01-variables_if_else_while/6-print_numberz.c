#include <stdio.h>

/**
 * main - Prints all single digit numbers number from 10 to 1 using for
 * Return: 0 (good)
 */
int main(void)
{
int d;

for (d = 0; d < 10; d++)
putchar((d % 10) + '0');

putchar('\n');

return (0);
}
