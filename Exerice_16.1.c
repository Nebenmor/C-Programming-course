#include<stdio.h>

void print_str(char *str)
{
	printf("%s\n", str);
}

main()
{
	char str[] = "I like C!";
	print_str(str);

	return 0;
}
