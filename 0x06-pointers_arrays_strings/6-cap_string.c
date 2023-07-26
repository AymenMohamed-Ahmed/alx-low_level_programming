#include "main.h"
#include <stdio.h>

/**
* cap_string - capitalizes all words of a string
* @s: string to capitalize
*
* Return: pointer to the resulting string
*/
char *cap_string(char *s)
{
int i, j;
char sep[] = " \t\n,;.!?\"(){}";

for (i = 0; s[i] != '\0'; i++)
{
/* check for separator */
for (j = 0; sep[j] != '\0'; j++)
{
/* if separator found, capitalize next character */
if (s[i] == sep[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] -= ('a' - 'A');
break;
}
}
}

/* capitalize first character */
if (s[0] >= 'a' && s[0] <= 'z')
s[0] -= ('a' - 'A');

return (s);
}
