#include "main.h"
/**
 * _islower - detects if a letter is lowercase
 * Return: 1 if true and 0 if false
 * @c: the ASCII representaion of a letter
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
