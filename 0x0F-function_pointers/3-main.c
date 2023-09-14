#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: number of command line arguments
 * @argv: array of values of arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, int *argv)
{
	int a, b;
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	o = get_op_func(argv[2]);
	if (o == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[3] == 0 && (argc[2] == '/' || argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", o(a, b));
	return (0);
}
