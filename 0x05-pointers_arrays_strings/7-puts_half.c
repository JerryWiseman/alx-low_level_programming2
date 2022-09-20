#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 1;
	int l;
	int _strlen(char *s);
	
	l = _strlen(str)/2;
	while(*str != '\0'){
        if (i > l){
            printf("%c",*str);
        }
        str++;
        i++;
    }
    printf("\n");
}

int _strlen(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; ++i);
    	return (i);
}
