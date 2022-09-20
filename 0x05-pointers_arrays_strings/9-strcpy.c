#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
    char *begin_dest = dest;
    do
    {
        *dest++ = *src++;
    } while (*src != '\0');
    return begin_dest;
}
