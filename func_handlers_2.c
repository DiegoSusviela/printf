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
