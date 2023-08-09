#include "main.h"
/**
 * _isalpha - checks if the element is alphabetical
 * @c: the ASCII representation of the element
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
