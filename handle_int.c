#include "main.h"
/**
 * handle_int - handles int for _printf function.
 * Return: number of cout function calls.
 * @list: is the list of args passed to _printf.
 */
int handle_int(va_list list)
{
	int length = 1, s = 1, sum = 0, n, num, out, l, t, h = 0;

	num = va_arg(list, int);
	if (num < 0)
	{
		cout('-');
		num = num * -1, length++;
	}
	l = num % 10, num = num / 10, n = num;
	if (n / 10 != 0)
	{
		do {
			t = n % 10;
			if (t == 0)
				n = n / 10, h++;
		} while (t == 0 && n / 10 != 0);
	}
	n = num;
	while (n / 10 != 0)
		n = n / 10, s = s * 10;
	while (s >= 1)
	{
		out = num % 10;
		sum += (out * s);
		s = s / 10, num = num / 10;
	}
	while (sum)
	{
		cout((sum % 10) + '0');
		sum = sum / 10, length++;
		if (sum == 0)
		{
			for (; h; length++, h--)
				cout('0');
		}
	}
	cout(l + '0');
	return (length);
}
