#include "main.h"

/**
* rev_string - reverses a string
* @s: pointer to a string
*
* Return: void
*/
void rev_string(char *s)
{
int len = 0, i = 0;
char temp;
while (s[len])
len++;
len--;
while (i < len)
{
temp = s[i];
s[i++] = s[len];
s[len--] = temp;
}
}
