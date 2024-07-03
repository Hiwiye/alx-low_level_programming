#include "main.h"
#include <stdio.h>

/**
 * print_addition - prints the result of the addition
 * @n: the first number as a string
 * @m: the second number as a string
 * @r: the buffer to store the result
 * @size_r: the size of the buffer
 */
void print_addition(char *n, char *m, char *r, int size_r)
{
	char *res;

	res = infinite_add(n, m, r, size_r);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *n1 = "1234567892434574367823574575678477685785645685876876";
	char *n2 = "774586734734563456453743756756784458";
	char *m1 = "9034790663470697234682914569346259634958693246597324";
	char *m2 = "659762347956349265983465962349569346";
	char r1[100];
	char r2[10];
	char r3[11];
	char *n3 = "1234567890";
	char *m3 = "1";
	char *n4 = "999999999";
	char *m4 = "1";

	print_addition(n1, n2, r1, 100);
	print_addition(m1, m2, r2, 10);
	print_addition(n3, m3, r2, 10);
	print_addition(n4, m4, r3, 11);

	return (0);
}

