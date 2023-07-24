#include "main.h"

/**
* _strcpy - copies a string
* @dest: pointer to the destination buffer
* @src: pointer to the source string
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
