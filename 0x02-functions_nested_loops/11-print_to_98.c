#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: is the number that it will start with
*/
#include "main.h"

void print_to_98(int n)
{
if (n <= 98)
{
for (; n < 98; n++)
{
print_number(n);
_putchar(',');
_putchar(' ');
}
}
else
{
for (; n > 98; n--)
{
print_number(n);
_putchar(',');
_putchar(' ');
}
}
print_number(98);
_putchar('\n');
}

/**
 * print_number - prints the number
 * @n: is the number
 */
void print_number(int n)
{
int i, j, div, num_digits;

if (n < 0)
{
_putchar('-');
n = -n;
}

num_digits = 1;
div = 1;
while (n / div >= 10)
{
div *= 10;
num_digits++;
}

for (i = 0; i < num_digits; i++)
{
j = n / div;
_putchar(j + '0');
n -= j *div;
div /= 10;
}
}
