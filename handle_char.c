void handle_char(va_list args)
{
    char c = (char)va_arg(args, int);
    putchar(c);
}
