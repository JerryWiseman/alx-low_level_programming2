#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while(i < n)
	{
        	printf("%d, ",*a++);
        	i++;
    	}
}
