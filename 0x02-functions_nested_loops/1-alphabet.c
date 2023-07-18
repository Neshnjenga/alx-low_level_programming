#include "main.h"
/**
*print_alphabet - printing in lower case
*Return: 0 (success)
*/
void print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar (letter);
}
_putchar (10);
}
