#include "holberton.h"

/**
 * check_for_specifiers - padsdsr
 * @format: iafassfa
 *
 * Return: number of chars and digits printed
 */

static int (*check_for_specifiers(const char *format))(va_list)
{
	unsigned int iter;
	data_t type[] = {
		{"c", print_char}, {"s", print_char_2},
		{"d", print_int}, {"i", print_int},
		{"b", print_to_binar}, {"%", print_percent},
		{"u", print_uns}, {"o", print_octal},
		{"x", print_hexa_low}, {"X", print_hexa_upper},
		{"S", print_str_non_print}, {"r", print_str_rev},
		{"R", print_rot_13}, {"p", print_p}, {NULL, NULL},
	};

	for (iter = 0; type[iter].type != NULL; iter++)
	{
		if (*(type[iter].type) == *format)
		{
			break;
		}
	}
	return (type[iter].func);
}

/**
 * _printf - asdasdng
 * @format: asdasdasction
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int iter = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[iter])
	{
		while(format[iter] != '%' && format[iter])
		{
			_putchar(format[iter]);
			count++;
			iter++;
		}
		if (!format[iter])
			return (count);
		f = check_for_specifiers(&format[iter + 1]);
		if (f)
		{
			count += f(valist);
			iter += 2;
			continue;
		}
		if (!format[iter + 1])
			return (-1);
		_putchar(format[iter]);
		count++;
		if (format[iter + 1] == '%')
			iter += 2;
		else
			iter++;
	}
	va_end(valist);
	return (count);
}
