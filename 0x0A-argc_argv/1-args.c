#include <stdio.h>

/**
* main - Entry point of the program
* @argc: The number of command line arguments
* @argv: An array of command line argument strings
* Return: 0 on success
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
