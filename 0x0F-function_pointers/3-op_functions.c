#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two integers
 * @a: int
 * @b: int
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	op_t *add_ptr;

	add_ptr->op = '+';
	add_ptr->(*f)(int, int) = a + b;
	return (add_ptr->(*f)(int, int));
}
/**
 * op_sub - subtract two integers
 * @a: int
 * @b: int
 *
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	op_t *sub_ptr;

	sub_ptr->op  = '-';
	sub_ptr->(*f)(int, int) = a - b;
	return (sub_ptr->(*f)(int, int));
}
/**
 * op_mul - multiplies two integers
 * @a: int
 * @b: int
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	op_t *mul_ptr;

	mul_ptr->op = '*';
	mul_ptr->(*f)(int, int) = a * b;
	return (mul_ptr->(*f)(int, int));
}
/**
 * op_div - divides two integers
 * @a: int
 * @b: int
 *
 * Return: division
 */
int op_div(int a, int b)
{
	op_t div_ptr;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	div_ptr->op = '/';
	div_ptr->(*f)(int, int) = a / b;
	return (div_ptr->(*f)(int, int));
}
/**
 * op_mod - returns remainder of division of two integers
 * @a: int
 * @b: int
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	op_t mod_ptr;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	mod_ptr->op = '%';
	mod_ptr->(*f)(int, int) = a % b;
	return (mod_ptr->(*f)(int, int));
}
