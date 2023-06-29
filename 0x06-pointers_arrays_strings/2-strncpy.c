#include "main.h"
/**
 * _strncpy - Function that copies a string
 * @dest: Destination string number
 * @src: The source string pointer
 * @n: The number of bytes to be used
 * Return: Pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
int count_of_bytes;
for (count_of_bytes = 0; count_of_bytes < n && src[count_of_bytes] != '\0'; count_of_bytes++)
dest[count_of_bytes] = src[count_of_bytes];
for (; count_of_bytes < n; count_of_bytes++)
dest[count_of_bytes] = '\0';
return (dest);
}
