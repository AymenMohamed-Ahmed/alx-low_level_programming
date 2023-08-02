#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: pointer to the memory area to fill
* @b: constant byte to fill memory with
* @n: number of bytes to fill
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
if (n)
{
*s = b;
_memset(s + 1, b, n - 1);
}
return (s);
}
