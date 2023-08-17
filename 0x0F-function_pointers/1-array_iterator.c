#include <stddef.h>

/**
* array_iterator - applies a function to each element of an array
* @array: the array to iterate through
* @size: the size of the array
* @action: the function to apply to each element
*
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && action)
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
