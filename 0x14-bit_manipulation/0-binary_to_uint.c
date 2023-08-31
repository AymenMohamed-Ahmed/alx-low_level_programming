#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: A pointer to a string containing a binary number.
*
* Return: The converted unsigned int, or 0 if invalid input.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
unsigned int power_of_two = 1;

if (b == NULL)
return (0);

int length = 0;
while (b[length] != '\0')
{
if (b[length] != '0' && b[length] != '1')
return (0);
length++;
}

for (int i = length - 1; i >= 0; i--)
{
if (b[i] == '1')
result += power_of_two;
power_of_two *= 2;
}

return (result);
}
