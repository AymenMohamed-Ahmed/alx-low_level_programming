#include <unistd.h>
#include "main.h"

void print_number(int n);

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
write(1, "FizzBuzz", 8);
}
else if (i % 3 == 0)
{
write(1, "Fizz", 4);
}
else if (i % 5 == 0)
{
write(1, "Buzz", 4);
}
else
{
print_number(i);
}
if (i != 100)
{
write(1, " ", 1);
}
}
write(1, "\n", 1);

return (0);
}

/**
* print_number - prints an integer
* @n: integer to be printed
*/
void print_number(int n)
{
int divisor = 1, i, resp;
char c;

if (n < 0)
{
write(1, "-", 1);
n *= -1;
}

for (i = 0; n / divisor > 9; i++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10)
{
resp = n / divisor;
c = '0' + resp;
write(1, &c, 1);
}
}
