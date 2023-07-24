#include "main.h"

/**
* print_array - prints n elements of an array of integers
* @a: pointer to an array of integers
* @n: number of elements to print
*
* Return: void
*/
void print_array(int *a, int n)
{
int i, j, num;
char c;
for (i = 0; i < n; i++)
{
num = a[i];
if (num < 0)
{
_putchar('-');
num = -num;
}
j = 1;
while (num / j > 9)
j *= 10;
while (j > 0)
{
c = num / j + '0';
_putchar(c);
num %= j;
j /= 10;
}
if (i < n - 1)
_putchar(','), _putchar(' ');
}
_putchar('\n');
}
