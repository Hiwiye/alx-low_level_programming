#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2;
	unsigned long fib1_half1, fib1_half2;
	unsigned long fib2_half1, fib2_half2;
	unsigned long half1, half2;

	printf("%lu, %lu", fib1, fib2);

	for (count = 2; count < 98; count++)
	{
		if (fib1 + fib2 < 10000000000)
		{
			fib1 = fib1 + fib2;
			fib2 = fib1 - fib2;
			printf(", %lu", fib1);
		}
		else
		{
			fib1_half1 = fib1 / 10000000000;
			fib1_half2 = fib1 % 10000000000;
			fib2_half1 = fib2 / 10000000000;
			fib2_half2 = fib2 % 10000000000;
			half1 = fib1_half1 + fib2_half1;
			half2 = fib1_half2 + fib2_half2;
			if (half2 >= 10000000000)
			{
				half1++;
				half2 -= 10000000000;
			}
			printf(", %lu%010lu", half1, half2);
			fib1 = fib2;
			fib2 = half1 * 10000000000 + half2;
		}
	}

	printf("\n");
	return (0);
}

