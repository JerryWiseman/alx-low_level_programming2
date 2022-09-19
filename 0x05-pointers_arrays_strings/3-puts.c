/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    void _puts(char *str);

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}

void _puts(char *str){
	while(*str != '\0')
        printf("%c",*str++);
}