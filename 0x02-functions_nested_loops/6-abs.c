#include "main.h"

/**
 * _abs - gives the absolute of a number
 * @n: is the number
 * Return: -n if less than 0 and n if greater than it
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
