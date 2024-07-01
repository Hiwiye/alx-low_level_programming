#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));

	while (sum < 2772 - 122) /* 122 is the ASCII value of 'z' */
	{
		c = rand() % 94 + 33; /* ASCII values between 33 and 126 */
		putchar(c);
		sum += c;
	}

	putchar(2772 - sum); /* Ensure the sum of characters is 2772 */

	return (0);
}

