#include <stdio.h>
#include <stdlib.h>

/**
* print_opcodes - prints the opcodes of a given memory region
* @ptr: pointer to the memory region
* @size: size of the memory region in bytes
*/
void print_opcodes(void *ptr, size_t size)
{
unsigned char *bytes = (unsigned char *)ptr;

size_t i;
for (i = 0; i < size; i++)
{
printf("%02x", bytes[i]);
if (i != size - 1)
printf(" ");
}
printf("\n");
}

/**
* main - entry point of the program
* @argc: number of arguments
* @argv: array of argument strings
*
* Return: 0 on success, 1 on incorrect number of arguments,
*         2 on negative number of bytes
*/
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

print_opcodes(main, num_bytes);

return (0);
}
