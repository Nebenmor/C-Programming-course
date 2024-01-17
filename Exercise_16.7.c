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
	char *str[7] = {"Sunday",
			"Monday",
			"Tuesday",
			"Wednesday",
			"Thurday",
			"Friday",
			"Saturday",
			};

	str_print(str, 7);

	return 0;
}

