#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints result of the multiplication of two numbers
 * @argc: number of command line argumnets
 * @argv: array of command line arguments
 *
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
