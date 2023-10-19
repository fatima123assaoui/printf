#include "main.h"
#include <stdarg.h>
/**
 * print_c - Prints a single character
 * @argu: Argument list containing the character to print
 *
 * Return: Always returns 1
 */
int print_c(va_list argu)
{
	char c;

	c = va_arg(argu, int);
	write(1, &c, 1);

	return (1);
}
/**
 * print_string_s - Prints a string
 * @argu: Argument list containing the string to print
 *
 * Return: Number of characters printed
 */
int print_string_s(va_list argu)
{
	char *str;

	str = va_arg(argu, char *);
	if (str == NULL)
		return (write(1, "(null)", 1));
	return (write(1, str, strlen(str)));
}
/**
 * print_percentage - Prints a percentage
 * @argu: Argument list containing the string to print
 *
 * Return: Number of characters printed
 */
int print_percentage(va_list __attribute__((__unused__)) argu)
{
	return (write(1, "%%", 1));
}
/**
 * print_exclamation - Prints aexclamtion
 * @argu: Argument list containing the string to print
 *
 * Return: Number of characters printed
 */
int print_exclamation(va_list __attribute__((__unused__)) argu)
{
	return (write(1, "%!", 2));
}
/**
 * print_K - Prints K
 * @argu: Argument list containing the string to print
 *
 * Return: Number of characters printed
 */
int print_K(va_list __attribute__((__unused__)) argu)
{
	return (write(1, "%K", 2));
}
