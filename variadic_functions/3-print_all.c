#include "variadic_functions.h"

/**
 * print_char - Prints a char
 * @c: Argument pointer
 * print_float - Prints a float
 * @ap: Argument pointer
 *print_all - Prints anything
 * @format: Types of arguments passed to function
 */
 

void print_all(const char * const format, ...)
{

	char c;
	int i;
	float f;
	char *s;
	int format_index = 0;
	va_list ap;

	while ((c = format[format_index++]) != '\0')
	{
	 if (c == 'c')
	{
		i = va_arg(args, int);
		printf("%c", i);
	} 
		else if (c == 'i')
		{
			i = va_arg(args, int);
		}	printf("%d", i); 
		else if (c == 'f') 
		{
			f = va_arg(args, double);
		}	printf("%f", f);
		else if (c == 's') 
		{
			s = va_arg(args, char*);
			if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		}	
	}

		va_end(args);
		printf("\n");
}
