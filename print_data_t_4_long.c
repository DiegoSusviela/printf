#include "holberton.h"

/**
 * print_int_l - Prints int l
 *
 * @list: list
 * Return: digit quantity for count.
 */

int print_int_l(va_list list)
{
	unsigned int num;
	long int n = va_arg(list, long int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		count++;
	}
	else
		num = n;
	count += print_number_uns(num);
	return (count);
}

/**
 * print_uns_l - prints uns
 *
 * @list: list
 * Return: digit quantity for count.
 */

int print_uns_l(va_list list)
{
	unsigned long int n = va_arg(list, unsigned long int);
	int count = 0;

	count += print_number_uns_l(n);
	return (count);
}

/**
 * print_octal_l - prints octal
 *
 * @list: list
 * Return: digit quantity for count.
 */

int print_octal_l(va_list list)
{
	int i = 0, count = 0;
	char hexnum[100];
	unsigned long int n = va_arg(list, unsigned long int);
	unsigned long int m = 1, aux, num = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		aux = n % 8;
		hexnum[i] = aux;
		i++;
		num = (aux * m) + num;
		n = n / 8;
		m = m * 10;
	}
	for (i = i - 1; i >= 0; i--)
	{
		/*printf("%i", hexnum[i]);*/
		_putchar(hexnum[i]);
		count++;
	}
	return (count);
}

/**
 * print_hexa_low_l - prints hexa lower
 *
 * @list: list
 * Return: digit quantity for count.
 */

int print_hexa_low_l(va_list list)
{
	int rem, i = 0, count = 0;
	char hexnum[100];
	unsigned long int decnum = va_arg(list, unsigned long int);

	if (decnum == 0)
	{
		_putchar('0');
		return (1);
	}

	while (decnum != 0)
	{
		rem = decnum % 16;
		if (rem < 10)
			rem = rem + 48;
		else
			rem = rem + 87;
		hexnum[i] = rem;
		i++;
		decnum = decnum / 16;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(hexnum[i]);
		count++;
	}
	return (count);
}

/**
 * print_hexa_upper_l - prints hexa uppercase
 *
 * @list: list
 * Return: digit quantity for count.
 */

int print_hexa_upper_l(va_list list)
{
	int rem, i = 0, count = 0;
	char hexnum[100];
	unsigned long int decnum = va_arg(list, unsigned long int);

	if (decnum == 0)
	{
		_putchar('0');
		return (1);
	}
	while (decnum != 0)
	{
		rem = decnum % 16;
		if (rem < 10)
			rem = rem + 48;
		else
			rem = rem + 55;
		hexnum[i] = rem;
		i++;
		decnum = decnum / 16;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(hexnum[i]);
		count++;
	}
	return (count);
}
