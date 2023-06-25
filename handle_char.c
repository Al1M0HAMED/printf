#include "main.h"
/**
 * handle_char - this function handels char for _printf function.
 * @list: is the list of args.
 * Return: Always 1.
 */
int handle_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	cout(c);
	return (1);
}
