#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: last_digit
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = _abs(n % 10);
	_putchar(last_digit + '0');
	return (last_digit);
}
