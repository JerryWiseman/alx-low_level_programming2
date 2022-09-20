#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    void print_rev(char *s);
    int _strlen(char *s);

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}


int _strlen(char *s){
	int i;
	for (i = 0; s[i] != '\0'; ++i);
    return (i);
}


void print_rev(char *s){
	int l, i;
  char *end_ptr;
 
  l = _strlen(s);
 
  end_ptr = s;
 
  // Move the end_ptr to the last character
  for (i = 0; i < l - 1; i++)
    end_ptr++;

  for (i = 0; i < l; i++) {
    printf("%c",*end_ptr);
    end_ptr--;
  }
 
}
