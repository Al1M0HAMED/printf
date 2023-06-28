#include "main.h"
/**
 * handle_rev_string - this function handles %r in _printf.
 * @list: list of args passed to _printf.
 *
 * Return: the string
 */
int handle_rev_string(va_list list)
{
	char *str;
	int i;

	str = va_arg(list, char*);
	if (str == NULL)
		str = ")Null(";
	rev_string(str);
	i = 0;
	while (i < _strlen(str))
	{
		cout(str[i]);
		i++;
	}
	return (_strlen(str));
}
