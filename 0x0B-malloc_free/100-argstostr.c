#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of the program
* @ac: the number of arguments
* @av: an array of strings containing the arguments
*
* Return: pointer to the new concatenated string
*         NULL if ac == 0 or av == NULL or if it fails
*/
char *argstostr(int ac, char **av)
{
char *concatenated;
int total_len = 0, arg_len, i, j, pos = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
arg_len = 0;
while (av[i][arg_len] != '\0')
arg_len++;

total_len += arg_len + 1; // Add 1 for the newline character
}

concatenated = (char *)malloc(total_len * sizeof(char));

if (concatenated == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
arg_len = 0;
while (av[i][arg_len] != '\0')
{
concatenated[pos] = av[i][arg_len];
pos++;
arg_len++;
}
concatenated[pos] = '\n'; // Add the newline character
pos++;
}

concatenated[pos] = '\0'; // Null-terminate the concatenated string

return (concatenated);
}
