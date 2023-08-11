#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = 0;
	int i = 0;

	while (n <= 9)
	{
		while (i <= 9)
		{
			putchar('0' + n);
			putchar('0' + i);
			putchar(',');
			putchar(' ');
			i++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
