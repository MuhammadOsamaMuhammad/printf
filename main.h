#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format ...);
void handle_char(va_list args);
int handle_string(va_list  args);
void handle_int(va_list args);
