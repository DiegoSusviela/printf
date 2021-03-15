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
			_putchar(s[position]);
			counter++;
		}
		position++;
	}
	return (counter);
}
