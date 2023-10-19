#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: parametre
 * Return:the number of characters printed
 */
int _printf(const char *format, ...)
{
	int len_count = 0;
	va_list argu;
	char ch;

	if (format == NULL || (*format == '%' && *(format + 1) == '\0'))

		return (-1);

	va_start(argu, format);
	while (format != NULL && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
			ch = *format;
			len_count += specifier_checker(ch, argu);
		}
		else
		{
			write(1, format, 1);
			len_count += 1;
		}
		format++;
	}
	va_end(argu);
	return (len_count);
}
