/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
	int i = 1;
	int l = _strlen(str)/2;
	while(*str != '\0'){
        printf("%c",*str++);
        if (i == l){
        	printf("\n");
        }
        i++;
    }
}

int _strlen(char *s){
	int i;
	for (i = 0; s[i] != '\0'; ++i);
    return (i);
}
