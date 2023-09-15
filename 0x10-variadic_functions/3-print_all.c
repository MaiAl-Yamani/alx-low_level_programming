#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *sep;
	int i;
	char *str;

	va_start(ap, format);
	i = 0;
	sep = "";
	while (format[i] && format)
	{
		switch (format[i])
		{
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					printf("(nil)");
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}
