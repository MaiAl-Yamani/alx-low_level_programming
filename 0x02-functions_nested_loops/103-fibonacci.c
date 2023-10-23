#include <stdio.h>
/**
 * main - prints sum of even Fibonacci numbers not exceeding 4000000.
 *
 * Return: void
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;
	float sum_total;

	while (1)
	{
		sum = f1 + f2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			sum_total += sum;

		f1 = f2;
		f2 = sum;
	}
	printf("%.0f\n", sum_total);
	return (0);
}
