#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - Prints anything based on the format provided.
* @format: A list of types of arguments passed to the function.
* @...: The arguments to be printed based on the format.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";
char *s_arg;

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, (float) va_arg(args, double));
break;
case 's':
s_arg = va_arg(args, char *);
if (s_arg == NULL)
s_arg = "(nil)";
printf("%s%s", separator, s_arg);
break;
default:
i++;
continue;
}

separator = ", ";
i++;
}

va_end(args);
printf("\n");
}
