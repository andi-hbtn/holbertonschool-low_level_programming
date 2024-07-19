#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i;
	unsigned int sum = 0;

	va_list number;
	va_start(number, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(number, int);
	}

	va_end(number);
	return (sum);
}