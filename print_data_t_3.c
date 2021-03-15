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
int print_rot_13(va_list list)
{
	return (0);
}
*/