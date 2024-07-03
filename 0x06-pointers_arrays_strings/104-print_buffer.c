#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: The buffer to print
 * @size: The size of the buffer
 */
void print_buffer(char *b, int size)
{
	int offset, i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (offset = 0; offset < size; offset += 10)
	{
		printf("%08x: ", offset);
		for (i = 0; i < 10; i += 2)
		{
			if (offset + i < size)
				printf("%02x", b[offset + i]);
			else
				printf("  ");
			if (offset + i + 1 < size)
				printf("%02x ", b[offset + i + 1]);
			else
				printf("   ");
		}
		for (j = 0; j < 10 && offset + j < size; j++)
		{
			if (b[offset + j] >= 32 && b[offset + j] <= 126)
				printf("%c", b[offset + j]);
			else
				printf(".");
		}
		printf("\n");
	}
}

