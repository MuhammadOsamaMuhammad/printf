#include <stdarg.h>
void handle_char(va_list args)
{
    char c = (char)va_arg(args, int);
    _putchar(c);
}
