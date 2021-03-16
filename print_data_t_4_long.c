#include "holberton.h"

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
	count+= print_number_uns(num);
	return (count);
}

int print_uns_l(va_list list)
{
	long unsigned int n = va_arg(list, long unsigned int);
	int count = 0;

	count+= print_number_uns_l(n);
	return (count);
}
/*
int print_octal_l(va_list list)
{
	
}
*/
int print_hexa_low_l(va_list list)
{

}
int print_hexa_upper_l(va_list list)
{

}
