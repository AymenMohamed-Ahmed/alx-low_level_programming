#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 on success, 98 on failure
*/
unsigned int check_num(char *str);

int main(int argc, char *argv[])
{
unsigned int num1, num2, product;

if (argc != 3)
{
printf("Error\n");
exit(98);
}
num1 = check_num(argv[1]);
num2 = check_num(argv[2]);
product = num1 *num2;
printf("%u\n", product);
return (0);
}

/**
* check_num - checks if a string contains only digits
* @str: string to check
*
* Return: converted integer if string contains only digits,
* exits with status 98 otherwise
*/
unsigned int check_num(char *str)
{
unsigned int num = 0;

while (*str)
{
if (*str < '0' || *str > '9')
{
printf("Error\n");
exit(98);
}
num = num * 10 + (*str - '0');
str++;
}
return (num);
}
