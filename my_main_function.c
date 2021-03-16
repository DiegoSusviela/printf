#include "holberton.h"

/**
 * check_for_specifiers - padsdsr
 * @format: iafassfa
 *
 * Return: number of chars and digits printed
 */

static int (*check_for_specifiers(int flag, const char *format))(va_list)
{
	unsigned int iter;
	data_t type[] = {
		{"c", print_char},
		{"s", print_char_2},
		{"d", print_int}, {"d", print_int_l}, {"d", print_int_h},
		{"i", print_int}, {"i", print_int_l}, {"i", print_int_h},
		{"b", print_to_binar},
		{"%", print_percent},
		{"u", print_uns}, {"u", print_uns_l}, {"u", print_uns_h},
		{"o", print_octal}, {"o", print_octal_l}, {"o", print_octal_h},
		{"x", print_hexa_low}, {"x", print_hexa_low_l}, {"x", print_hexa_low_h},
		{"X", print_hexa_upper}, {"X", print_hexa_upper_l},
		{"X", print_hexa_upper_h},
		{"S", print_str_non_print},
		{"r", print_str_rev},
		{"R", print_rot_13},
		{"p", print_p},
		{NULL, NULL},
	};

	for (iter = 0; type[iter].type != NULL; iter++)
	{
		if (*(type[iter].type) == *format)
		{
			break;
		}
	}
	if (flag == 0)
		return (type[iter].func);
	if (flag == 1)
		return (type[iter + 2].func);
	else
		return (type[iter + 1].func);
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
	int flag = 0;

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[iter])
	{
		while (format[iter] != '%' && format[iter])
		{
			_putchar(format[iter]);
			count++;
			iter++;
		}
		if (!format[iter])
			return (count);
		if (format[iter + 1] == 'h')
		{
			iter++;
			flag = 1;
		}
		else
		{
			if (format[iter + 1] == 'l')
			{
				iter++;
				flag = 2;
			}
			else
				flag = 0;
		}
		f = check_for_specifiers(flag, &format[iter + 1]);
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
