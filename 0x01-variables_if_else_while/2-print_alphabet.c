#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: 0 (success)
 */
int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);

putchar('\n');

return (0);
}
