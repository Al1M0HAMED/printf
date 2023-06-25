#ifndef MAIN_H
#define MAIN_H


#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
int _strlen(char *s);
int cout(char c);
int _printf(const char *format, ...);
int handle_string(va_list list);
int handle_char(va_list list);
int handle_percent(void);
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
