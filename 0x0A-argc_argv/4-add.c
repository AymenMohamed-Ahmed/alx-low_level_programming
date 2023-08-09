#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
* is_digit - Check if a string is a positive integer
* @str: The string to check
* Return: True if the string is a positive integer, else False
*/
bool is_digit(char *str)
{
if (*str == '\0')
return (false);

while (*str)
{
if (*str < '0' || *str > '9')
return (false);
str++;
}

return (true);
}

/**
* main - Entry point of the program
* @argc: The number of command line arguments
* @argv: An array of command line argument strings
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
int sum = 0;
int i;

for (i = 1; i < argc; i++)
{
if (is_digit(argv[i]))
sum += atoi(argv[i]);
else
{
printf("Error\n");
return (1);
}
}

printf("%d\n", sum);
return (0);
}
