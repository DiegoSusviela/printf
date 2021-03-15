#include "holberton.h"

/**
 * print_number_uns - change decimal number to binary
 * @n: string to print.
 *
 * Return: binary number
 */

int print_number_uns(unsigned int n)
{
	unsigned int num;

	num = n;
	if (num / 10 != 0)
		print_number(num / 10);
	_putchar('0' + (num % 10));

	return (num_lenght_uns(n));
}
