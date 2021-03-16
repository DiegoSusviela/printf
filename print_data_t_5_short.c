#include "holberton.h"

int print_int_h(va_list list)
{
	unsigned int num;
	int n = va_arg(list, int);
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

int print_uns_h(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int count = 0;

	count += print_number_uns_l(n);
	return (count);
}

int print_octal_h(va_list list)
{
	int i = 0, count = 0;
	char hexnum[100];
	int n = va_arg(list,  int);
	int m = 1, aux, num = 0;

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

int print_hexa_low_h(va_list list)
{
	int rem, i = 0, count = 0;
	char hexnum[100];
	unsigned  int decnum = va_arg(list, unsigned  int);

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

int print_hexa_upper_h(va_list list)
{
	int rem, i = 0, count = 0;
	char hexnum[100];
	unsigned  int decnum = va_arg(list, unsigned  int);

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
