#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>



void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
  * print_int - print integer
  * @arg: integer
  * Return: Nothing
  */
void print_int(va_list arg)
{
	int num;
	num = va_arg(arg, int);
	printf("%d", num);
}


/**
  * print_float - print float
  * @arg: argument
  * Return: Nothing
  */
void print_float(va_list arg)
{
	float num;
	num = va_arg(arg, double);
	printf("%f", num);
}

/**
  * print_char - print character
  * @arg: argument
  */
void print_char(va_list arg)
{
	char letter;
	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
  * print_string - print a string
  * @arg: list of argument
  */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
  * print_all - a function that print anything
  * @format: list of argument passed in
  * @...: variable number of argument
  * Return: npthing
  */


void print_all(const char * const format, ...)
{

	int i = 0, j = 0;
	va_list arg;
	pointer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	char *separator = "";

	va_start(arg, format);

	while (format && (*format + i))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(arg);
			separator = ", ";
		}
		i++;
	}

	printf("\n");

	va_end(arg);
}
	
