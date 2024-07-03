#include "main.h"
#include <stdio.h>
#include <string.h> /* Include string.h for strcpy and strcat */

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char part1[] = "Expect the best. Prepare for the worst. ";
	char part2[] = "Capitalize on what comes.\n";
	char s[100];
	char *p;

	strcpy(s, part1);
	strcat(s, part2);

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}

