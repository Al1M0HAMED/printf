#ifndef MAIN_H
#define MAIN_H


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
void rev_string(char *);
int _strlen(char *s);
int cout(char c);
int _printf(const char *format, ...);
int handle_string(va_list list);
int handle_char(va_list list);
int handle_percent(void);
int handle_int(va_list list);
int handle_decimal(va_list list);
int handle_rev_string(va_list list);
/**
 * struct handle - Short description.
 * @str: First member.
 * @function: Second member.
 * @c: ..
 */
typedef struct handle
{
	char *str;
	int (*function)();
} ops;

#endif
