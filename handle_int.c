#include "main.h"
/**
 * handle_int - handles int for _printf function.
 * Return: number of cout function calls.
 * @list: is the list of args passed to _printf.
 */
int handle_int(va_list list)
{
	long int length = 1, num, i = 1;
	long int out[11];

	num = va_arg(list, int);
	if (num < 0)
	{
		cout('-');
		num = -num;
		length++;
	}
	out[0] = (num % 10) + '0';
	while (num / 10)
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
