#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;
    char *_strcpy(char *dest, char *src);

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}


char *_strcpy(char *dest, char *src){
    char *begin_dest = dest;
    do{
        *dest++ = *src++;
    }while(*src != '\0');
	return begin_dest;
}
