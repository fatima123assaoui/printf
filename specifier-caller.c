#include <stdarg.h>
#include "main.h"
/**
 * specifier_checker - Determines the appropriate function for a specifier
 * @t: Specifier character
 * @argu: argument passes to the fucntion
 * Return: Pointer to the corresponding function or NULL
 */
int specifier_checker(const char t, va_list argu)
{
	 unsigned int index = 0, len = 0;

	specifier_t checker_fct[] = {
		{'c', print_c},
		{'s', print_string_s},
		{'%', print_percentage},
		{'!', print_exclamation},
		{'K', print_K},
		{'i', h_integer},
		{'d', h_integer}};

	while (index < sizeof(checker_fct) / sizeof(checker_fct[0]))
	{
		if (t == checker_fct[index].str)
		{

			len += checker_fct[index].fct_op(argu);
			break;
		}
		index++;
	}
	return (len);
}
