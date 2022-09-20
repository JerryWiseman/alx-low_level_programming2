#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while(*str != '\0')
        	printf("%c",*str++);
	printf("\n");
}
