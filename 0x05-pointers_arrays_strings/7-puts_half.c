#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    void puts_half(char *str);
    int _strlen(char *s);
    char *str;

     str = "0123456789";
     puts_half(str);
     return (0);
}


void puts_half(char *str){
	int i = 0;
	while(*str != '\0'){
        printf("%c",*str++);
        i++;
        if (i == _strlen(*str)/2){
        	printf("\n");
        }
    }
}

int _strlen(char *s){
	int i;
	for (i = 0; s[i] != '\0'; ++i);
    return (i);
}