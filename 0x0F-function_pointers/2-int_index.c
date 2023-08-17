#include <stddef.h>

/**
* int_index - searches for an integer in an array
* @array: the array to search through
* @size: the number of elements in the array
* @cmp: pointer to the function used to compare values
*
* Return: the index of the first element for which cmp doesn't return 0,
*         -1 if no element matches or size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (array && cmp)
{
for (int i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
