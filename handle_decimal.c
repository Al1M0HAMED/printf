#include "main.h"
/**
 * handle_decimal - handles int for _printf function.
 * Return: number of cout function calls.
 * @list: is the list of args passed to _printf.
 */
int handle_decimal(va_list list)
{
	long int length = 1, num, i = 1;
	long int out[14];

	num = va_arg(list, int);
	if (num < 0)
	{
		cout('-');
		num = -num;
		length++;
	}
	out[0] = num % 10;
	num = num / 10;
	while (num)
	{
		out[i] = num % 10;
		num = num / 10;
		i++;
	}
	i--;
	while (i > 0)
	{
		cout(out[i] + '0');
		length++, i--;
	}
	cout(out[0] + '0');
	return (length);
}
