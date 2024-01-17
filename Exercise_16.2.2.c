#include <stdio.h>

void print_updated_str(char *str);

main()
{
	char *ptr;
	char str[] = "I like C!";
	
	ptr = str;

	int i;
	for(i = 0; str[i]; i++){
		if(str[i] == 'i')
			str[i] = 'o';
		if(str[i] == 'k')
                        str[i] = 'v';
	}

	print_updated_str(str);

	return 0;
}

/* user-generated function definition */
void print_updated_str(char *str)
{
	printf("%s\n", str);
}
