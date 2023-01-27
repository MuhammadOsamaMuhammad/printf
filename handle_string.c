#include <stdarg.h>


/**
 * handle_string - handle strings for _printf
 * @args: va list
 * Return: number of chars of string
 */


int handle_string(va_list args)
{
	char *s = va_arg(args, char *);
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
	}
	return (j + 1);
}
