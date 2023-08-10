#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory using malloc
* @b: size of memory to allocate
*
* Return: pointer to allocated memory, or normal process termination with
* status value of 98 if malloc fails
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
