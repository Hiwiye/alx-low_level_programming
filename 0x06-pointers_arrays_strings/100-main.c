#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char part1[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ";
	char part2[] = "ROT-13) is a simple letter substitution cipher.\n";
	char s[256];
	char *p;

	strcpy(s, part1);
	strcat(s, part2);

	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	return (0);
}

