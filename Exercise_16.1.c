/* A program that passes string to a function */

#include <stdio.h>

char PassStr(char *str);
char PassStr(char *str)
{
	printf("%s\n", str);
}

int main()
{
	char str[] = "I like C!";

	char *ptr;
	ptr = &str[0];

	PassStr(str);
	PassStr(ptr);

	return 0;
}
