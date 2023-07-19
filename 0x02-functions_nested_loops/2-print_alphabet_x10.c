#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters ten times
*Return: no return
*/
void print_alphabet_x10(void)
{
int counter = 0;
int alphabet;
while (counter++ <= 9)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);

_putchar(10);
}
}
