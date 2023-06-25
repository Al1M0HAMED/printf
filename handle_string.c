#include "main.h"
/**
 * handle_string - this function is for string hanlde fo _printf.
 * @list: is the list of args passed to _printf.
 * Return: the length of string printed.
 */
int handle_string(va_list list)
{
	int i;
	char *str;

	i = 0;
	str = va_arg(list, char *);
	if (str == NULL)
	{
		str = "(null)";
		while (str[i] != '\0')
		{
			cout(str[i]);
			i++;
		}
	}
	else
	{
		while (str[i] != '\0')
		{
			cout(str[i]);
			i++;
		}
	}
	return (i);
}
