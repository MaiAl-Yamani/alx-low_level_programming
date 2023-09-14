#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name of the person to be print
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == print_name_as_is)
	{
		f(name);
	}
	if (f == print_name_uppercase)
	{
		f(name);
	}
}
