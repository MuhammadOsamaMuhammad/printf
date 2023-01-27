#include <stdarg.h>

/**
 * handle_char - function to handle chars for the _printf
 * @args: va_list
 * Return: void
 */


void handle_char(va_list args)
{
	char c = (char)va_arg(args, int);

	_putchar(c
}
