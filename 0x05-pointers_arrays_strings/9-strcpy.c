#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *p;

	p = _strcpy(s1, "First, solve the Then, wde\n");
	printf("%s", s1);
	printf("%s", p);
	return (0);
}
