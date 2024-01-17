/* using an array of of pointers */
#include <stdio.h>

void str_print(char **str, int max);
void str_print(char **str, int max)     /* function definition */
{
int i;
for(i = 0; i < max; i++)
        printf("%s\n", str[i]);
}


main()
{
	char *str[4] = {"I am a software Engineer;",
			"I am great;",
			"I am blessed;",
			"I am highly engraced\n",
			};

	str_print(str, 4);

	return 0;
}

