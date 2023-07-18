#include "main.h"

/**
 * print_sign - prints a sign if number is greater or less or equal to 0
 * @n: the number
 * Return: 1 if greater ,0 if equal and -1 if less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
