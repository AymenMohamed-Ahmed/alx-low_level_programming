#include "main.h"

/**
* puts2 - prints every other character of a string
* @str: pointer to a string
*
* Return: void
*/
void puts2(char *str)
{
int i = 0;
while (str[i] && str[i + 1])
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
