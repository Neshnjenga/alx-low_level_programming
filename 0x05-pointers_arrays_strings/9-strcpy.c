#include "main.h"

/**
 * *_strcpy - copies the string pointe
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int pab, i;

	len = 0;

	while (src[pab] != '\0')
	{
		pab++;
	}

	for (i = 0; i < pab; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
