#include "main.h"
/**
 * _strncat - The function that concatenates the 2 strings
 * @dest: Destination string pointer
 * @src: The source string pointer
 * @n: The number of bytes to be concatenated
 * Return: The pointer to the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, z;
	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string = 0;
	}
	for (z = 0; z < n && src[z] != '\0'; z++, length_of_string++)
	{
		dest[length_of_string] = src[z];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
