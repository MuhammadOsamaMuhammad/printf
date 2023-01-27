#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int counter = 0;
    
    for (int i = 0; format[i] != '\0'; i++) 
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
            {
                handle_char(args);
                counter++;
            }
            else if (format[i] == 's')
            {   counter += handle_string(args);
            }
            else if (format[i] == 'd' || format[i] == 'i') 
            {   counter++;
                handle_int(args);
            }
            else
            {   counter++;
                _putchar('%');
            }
        } 
        else 
        {   counter++;
            _putchar(format[i]);
        }
    }
    va_end(args);
    return (counter);
}
