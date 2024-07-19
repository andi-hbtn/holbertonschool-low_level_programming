#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;

	va_list number;
	va_start(number, n);

	for (i = 0; i < n; i++)
	{
		printf("%d ", va_arg(number, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s ", separator);
		}
		}
	printf("\n");
	va_end(number);
}