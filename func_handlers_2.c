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

/**
 * _strlen - Entry point
 * @s: wopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int marker = 0;

	while (*(s + marker))
		marker++;
	return (marker);
}

/**
 * _print_rev_recursion - Entry point
 * @s: string to modify
 *
 * Return: pointer to memory area s
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

/**
 * _pow - calculates an exponent
 * @base: base of exponent
 * @exponent: exponent of number
 *
 * Return: base ^ exponent
 */
static unsigned long _pow(unsigned int base, unsigned int exponent)
{
	unsigned int i;
	unsigned long ans = base;

	for (i = 1; i < exponent; i++)
		ans *= base;
	return (ans);
}