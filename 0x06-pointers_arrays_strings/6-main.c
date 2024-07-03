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
	char str1[] = "Expect the best. Prepare for the worst. Capitalize on what ";
	char str2[] = "comes.\nhello world! hello-world 0123456hello world\t";
	char str3[] = "hello world.hello world\n";
	char str[256];
	char *ptr;

	/* Combine the strings to form the original */
	strcpy(str, str1);
	strcat(str, str2);
	strcat(str, str3);

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}

