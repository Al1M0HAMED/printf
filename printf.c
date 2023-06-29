#include "main.h"
/**
 * _printf - this is an implementation of printf function.
 * @format: is a string
 * Return: printed string length or 0 if failed.
 */
int _printf(const char *format, ...)
{
	int length = 0, i = 0, j, check;
	va_list list;
	ops handle[] = {
		{"%s", handle_string},
		{"%c", handle_char},
		{"%%", handle_percent},
		{"%d", handle_decimal},
		{"%i", handle_int},
		{"%r", handle_rev_string}
	};

	va_start(list, format);
	if ((format[0] == '%' && format[1] == '\0') || format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		j = 0, check = 1;
		while (j < 6 && format[i] != '\0')
		{
			if (format[i] == handle[j].str[0] && format[i + 1] == handle[j].str[1])
			{
				length = length + handle[j].function(list);
				i += 2, check = 0;
			}
			j++;
		}
		if (check)
		{
			cout(format[i]);
			i++, length++;
		}
	}
	va_end(list);
	return (length);
}
