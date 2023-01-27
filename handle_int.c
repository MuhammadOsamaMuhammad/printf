void handle_int(va_list args) {
    int n = va_arg(args, int);
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    int digits[10];  
    int index = 0;

    while (n > 0)
    {
        digits[index] = n % 10;
        index++;
        n /= 10;
    }
    if (index == 0)
    {
        putchar('0');
    } 
    else 
    {
        for (index = index - 1; index >= 0; index--)
        {
            putchar(digits[index] + '0');
        }
    }
}
