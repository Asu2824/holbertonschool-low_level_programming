#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @dest: an input string (destination)
 * @src: an input string (source)
 * @n: an input integer (number of characters to copy)
 *
 * Return: A pointer to the resulting string (destination)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *temp = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (temp);
}
