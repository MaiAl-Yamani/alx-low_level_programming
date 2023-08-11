#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	char text;
	int num = 0;

	for (getchar(num) ; getchar(num) <= '9' ; num++)	
	{
		putchar(getchar(num));
	}
	putchar('\n');

	return (0);
}
