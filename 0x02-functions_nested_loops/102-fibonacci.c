#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * separated by comma, followed by a space
 *
 * Return: void
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	int c;

	for (c = 0; c < 50; c++)
	{
		sum = f1 + f2;
		printf("%lu", sum);
		f1 = f2;
		f2 = sum;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
