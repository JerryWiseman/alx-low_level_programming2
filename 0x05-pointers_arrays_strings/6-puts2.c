#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    void puts2(char *str);

    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}


void puts2(char *str){
	while(*str != '\0')
        	printf("%c",*str++);
	printf("%c\n");
}
