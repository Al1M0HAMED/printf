#include "main.h"
/**
 * rev_string - this function reverse a string.
 *
 * @s: is a char pointer.
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i, j, n, temp0, temp1;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	j = i + 1;
	for (n = 0; n < j / 2; n++)
	{
		temp0 = *(s + n);
		temp1 = *(s + i);
		*(s + n) = temp1;
		*(s + i) = temp0;
		i--;
	}

}
