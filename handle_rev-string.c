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
	i = _strlen(str);
	while (i > 0)
	{
		cout(str[i]);
		i--;
	}
	return (_strlen(str));
}
