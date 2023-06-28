#include "main.h"
/**
 * handle_int - handles int for _printf function.
 * Return: number of cout function calls.
 * @list: is the list of args passed to _printf.
 */
int handle_int(va_list list)
{
	int length = 1, s = 1, sum = 0, n, num, out;

	num = va_arg(list, int);
	if (num < 0)
	{
		cout('-');
		num = num * -1;
		length++;
	}
	n = num;
	while (n / 10 != 0)
		n = n / 10, s = s * 10;
	while (s >= 1)
	{
		out = num % 10;
		sum += out * s;
		s = s / 10, num = num / 10;
	}
	s = (sum % 10) + '0';
	sum = sum / 10;
	cout(s);
	while (sum)
	{
		cout((sum % 10) + '0');
		sum = sum / 10, length++;
	}
	return (length);
}
