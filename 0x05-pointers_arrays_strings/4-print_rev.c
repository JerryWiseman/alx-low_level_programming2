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
    void _puts(char *s);
    void swap_char(char *a, char *b);

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}

void swap_char(char *a, char *b){
	char temp = *a;
	*a = *b;
    *b = temp;
}

int _strlen(char *s){
	int i;
	for (i = 0; s[i] != '\0'; ++i);
    return (i);
}

void _puts(char *s){
	while(*s != '\0')
        printf("%c",*s++);
}

void print_rev(char *s){
	int l, i;
  char *begin_ptr, *end_ptr;
 
  l = _strlen(s);
 
  // Set the begin_ptr and end_ptr
  // initially to start of string
  begin_ptr = s;
  end_ptr = s;
  
 
  // Move the end_ptr to the last character
  for (i = 0; i < l - 1; i++)
    end_ptr++;

  // Swap the char from start and end
  // index using begin_ptr and end_ptr
  for (i = 0; i < l / 2; i++) {
 
    // swap character
    swap_char(end_ptr, *begin_ptr);
 
    // update pointers positions
    begin_ptr++;
    end_ptr--;
  }
  _puts(s);
}