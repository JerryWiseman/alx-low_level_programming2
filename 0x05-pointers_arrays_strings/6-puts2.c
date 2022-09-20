#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	while(*str != '\0')
        	printf("%c",*str++);
	printf("%c\n");
}
