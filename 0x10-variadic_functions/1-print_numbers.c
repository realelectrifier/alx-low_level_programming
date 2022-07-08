#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed  between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_pointer;

	if (separator == NULL || n == 0)
		return;

	va_start(arg_pointer, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_pointer, unsigned int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg_pointer);
}
