#include "holberton.h"

/**
 * print_number_uns_l - prints number
 * @n: string to count digits.
 *
 * Return: digit quantity for count.
 */


int print_number_uns_l(unsigned long int n)
{
	unsigned long int num;

	num = n;
	if (num / 10 != 0)
		print_number(num / 10);
	_putchar('0' + (num % 10));

	return (num_lenght_uns(n));
}
