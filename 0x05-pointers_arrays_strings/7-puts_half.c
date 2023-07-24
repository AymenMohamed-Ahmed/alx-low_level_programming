#include "main.h"

/**
* puts_half - prints half of a string
* @str: pointer to a string
*
* Return: void
*/
void puts_half(char *str)
{
int len = 0, n;
while (str[len])
len++;
n = (len % 2 == 0) ? len / 2 : (len - 1) / 2 + 1;
while (str[n])
_putchar(str[n++]);
_putchar('\n');
}
