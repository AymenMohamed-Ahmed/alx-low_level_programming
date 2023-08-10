#include <stdlib.h>
#include "main.h"

/**
* array_range - creates an array of integers
* @min: minimum value to include in array
* @max: maximum value to include in array
*
* Return: pointer to newly created array, or NULL if function fails or
* if min > max
*/
int *array_range(int min, int max)
{
int *arr;
int i;

if (min > max)
return (NULL);
arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);
for (i = 0; min <= max; i++, min++)
arr[i] = min;
return (arr);
}
