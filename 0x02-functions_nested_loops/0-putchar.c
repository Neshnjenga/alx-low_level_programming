#include<stdio.h>

/**
*main - print putchar
*
*Return: 0 (success)
*/
int main(void)
{
char nelson[10] = "_putchar";

int i;

for (i = 0; i < 8; i++)
{
_putchar(nelson[i]);
}
_putchar(10);
return (0);
}
