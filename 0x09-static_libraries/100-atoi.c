#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: pointer to a string
*
* Return: integer value of the string
*/
int _atoi(char *s)
{
int i = 0, sign = 1, num = 0;
while (s[i] && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] && s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + sign * (s[i++] - '0');
}
return (num);
}
