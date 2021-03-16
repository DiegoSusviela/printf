#include "holberton.h"

/**
 * _printf - print a number using print_number func
 * @format: string to print.
 *
 * Return: integer.
 */
/*
int _printf(const char *format, ...)
{
	data_t type[] = {
		{"c", print_char}, {"s", print_char_2},
		{"d", print_int}, {"i", print_int},
		{"b", print_to_binar}, {"%", print_percent},
		{"u", print_uns}, {"o", print_octal},
		{"x", print_hexa_low}, {"X", print_hexa_upper},
		{"S", print_str_non_print}, {"r", print_str_rev},
		{"R", print_rot_13}, {"p", print_p}, {NULL, NULL},
	};

	int indx_type, iter = 0, count = 0;

	va_list list;

	if ((!format) || (format[iter] == '%' && format[iter + 1] == '\0'))
		return (-1);

	va_start(list, format);

	while (format[iter])
	{
		while (format[iter] && format[iter] != '%')
		{
			_putchar(format[iter]);
			count++;
			iter++;
		}		
		if (format[iter])
		{
			indx_type = 0;
			iter++;
			while (type[indx_type].type)
			{
				if (*type[indx_type].type == format[iter])
					count += type[indx_type].func(list);
				indx_type++;
			}
		}
		else
			break;
		iter++;
	}
	va_end(list);
	return (count);
}*/


static int (*check_for_specifiers(const char *format))(va_list)
{
	unsigned int i;
	data_t type[] = {
		{"c", print_char}, {"s", print_char_2},
		{"d", print_int}, {"i", print_int},
		{"b", print_to_binar}, {"%", print_percent},
		{"u", print_uns}, {"o", print_octal},
		{"x", print_hexa_low}, {"X", print_hexa_upper},
		{"S", print_str_non_print}, {"r", print_str_rev},
		{"R", print_rot_13}, {"p", print_p}, {NULL, NULL},
	};

	for (i = 0; type[i].type != NULL; i++)
	{
		if (*(type[i].type) == *format)
		{
			break;
		}
	}
	return (type[i].func);
}

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = check_for_specifiers(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (count);
}