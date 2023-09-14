#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - pointer to function that corresponds to the operator
 * @s: operator passed
 *
 * Return: int pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	if (s != "+" || s != "-" || s != "*" || s != "/" || s != "%")
		return (NULL);
	return ((*get_op_func(s))(int, int));
}
