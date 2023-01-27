#include <stdarg.h>

int handle_string(va_list args)
{
char* s = va_arg(args, char*);
int j;
    for (j = 0; s[j] != '\0'; j++) 
    {
        _putchar(s[j]);
    }
    return (j+1);
}
