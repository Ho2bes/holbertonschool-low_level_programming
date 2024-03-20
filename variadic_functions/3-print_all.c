#include <stdio.h>
#include <stdarg.h>
/**
* print_all - prints anything.
* @format: anything.
*/
void print_all(const char * const format, ...)
{
int i = 0, blank;
char *str;
va_list a_list;
va_start(a_list, format);
while (format && format[i] != '\0')
{
blank = 1;
switch (format[i])
{
case 'c':
printf("%c", va_arg(a_list, int));
break;
case 'i':
printf("%i", va_arg(a_list, int));
break;
case 'f':
printf("%f", va_arg(a_list, double));
break;
case 's':
str = va_arg(a_list, char*);
if (str)
{
printf("%s", str);
break;
}
printf("(nil)");
break;
default:
blank = 0;
break;
}
if (format[i + 1] != '\0' && blank == 1)
{
printf(", ");
}
i++;
}
printf("\n");
va_end(a_list);
}
