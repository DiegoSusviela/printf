#include "holberton.h"

/**
 * print_str_rev - print string everything that is not %
 * @list: start of string.
 * Return: string length for count.
 */

int print_str_rev(va_list list)
{
	char *aux;

	aux = va_arg(list, char*);
	if (!aux)
		return (0);
	_print_rev_recursion(aux);
	return (_strlen(aux));
}

/**
 * print_rot_13 - print % in case that %% is typed into the _printf function
 * @list: % to print.
 *
 * Return: % char length for count.
 */
/*
int _rot13(va_list ap)
{
	int i, j, counter = 0;
	int f = 0;
	char *s = va_arg(ap, char*);
	char enco_in[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char enco_out[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		f = 0;
		for (j = 0; [j] && !f; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				counter++;
				f = 1;
			}
		}
		if (!f)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}*/
int print_rot_13(va_list ap)
{
	int position = 0, count, f, counter = 0;
	char *s = va_arg(ap, char*);
	char enco_in[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char enco_out[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (!s)
		s = "(null)";
	while (s[position])
	{
		f = 0;
		for (count = 0; count < 52; count++)
			if (enco_in[count] == s[position])
			{
				_putchar(enco_out[count]);
				count = 52;
				f = 1;
				counter++;
			}
		if (!f)
		{
			_putchar(s[i]);
			counter++;
		}
		position++;
	}
	return (counter);
}