#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include<string.h>
#include<stdint.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int specifier_checker(const char t, va_list argu);
int print_c(va_list argu);
int print_string_s(va_list argu);
int _strlen_(char *s);
int print_percentage(va_list __attribute__((__unused__)) argu);
int print_exclamation(va_list __attribute__((__unused__)) argu);
int print_K(va_list __attribute__((__unused__)) argu);
int h_integer(va_list _ptr);
/**
 * struct specifier - Structure to hold specifier and function pair
 * @str: The specifier string
 * @fct_op: Pointer to the corresponding printing function
 */
typedef struct specifier
{
	char str;
	int (*fct_op)(va_list);
} specifier_t;

#endif
