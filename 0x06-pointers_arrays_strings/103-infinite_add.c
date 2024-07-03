#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result if it fits in the buffer, otherwise 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;
	int carry = 0;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (i > size_r - 1 || j > size_r - 1)
		return (0);
	k = 0;
	for (i -= 1, j -= 1, k = 0; i >= 0 || j >= 0 || carry; i--, j--, k++)
	{
		if (k >= size_r - 1)
			return (0);
		m = i >= 0 ? n1[i] - '0' : 0;
		n = j >= 0 ? n2[j] - '0' : 0;
		l = m + n + carry;
		r[k] = (l % 10) + '0';
		carry = l / 10;
	}
	r[k] = '\0';
	for (k -= 1, i = 0; i < k; k--, i++)
	{
		m = r[k];
		r[k] = r[i];
		r[i] = m;
	}
	return (r);
}

