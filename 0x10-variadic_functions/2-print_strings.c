#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
const char *current_string;

va_list args;
va_start(args, n);

for (i = 0; i < n; ++i)
{
current_string = va_arg(args, const char *);

if (current_string != NULL)
{
printf("%s", current_string);
}
else
{
printf("(nil)");
}

if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}

va_end(args);

printf("\n");
}
