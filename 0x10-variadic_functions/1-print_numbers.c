#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: pointer to the string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
		unsigned int i;
	        va_list countPtr;

		va_start(countPtr, n);

	       for (i = 0; i < (n - 1) && n != 0; i++)
		{
			if (!separator)									printf("%d", va_arg(countPtr, int));
			else			
			printf("%d%s", va_arg(countPtr, int), separator);			}
			if (n)
			printf("%d\n", va_arg(countPtr, int));
							
			else
										                        printf("\n");
			va_end(countPtr);
}
