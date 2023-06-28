#include "main.h"
/**
 * handle_decimal - handles int for _printf function.
 * Return: number of cout function calls.
 * @list: is the list of args passed to _printf.
 */
int handle_decimal(va_list list)
{
	int length = 1, num, i = 1;
	int out[14];

	num = va_arg(list, int);
	if (num < 0)
	{
		cout('-');
		num = num * -1;
		length++;
	}
	out[0] = (num % 10) + '0';
	while (num / 10 != 0)
	{
		num = num / 10;
		out[i] = (num % 10) + '0';
		i++;
	}
	i--;
	while (i > 0)
	{
		cout(out[i]);
		length++, i--;
	}
	cout(out[0]);
	return (length);
}
