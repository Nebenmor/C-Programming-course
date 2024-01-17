#include <stdio.h>

void print_updated_str(char *str);

main()
{
	char *ptr1, *ptr2;
	char str[] = "I like C!";
	ptr1 = &str[3];
	ptr2 = &str[4];
	*ptr1 = 'o';
	*ptr2 = 'v';

	print_updated_str(str);

	return 0;
}

/* user-generated function definition */
void print_updated_str(char *str)
{
	printf("%s\n", str);
}
