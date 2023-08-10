#include <stdlib.h>
#include "main.h"

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to previously allocated memory
* @old_size: size in bytes of allocated space for ptr
* @new_size: size in bytes of new memory block
*
* Return: pointer to new memory block, or NULL if function fails
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);
if (ptr == NULL)
return (malloc(new_size));
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
new_ptr[i] = ((char *)ptr)[i];
free(ptr);
return (new_ptr);
}
