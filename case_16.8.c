/* pointing to functions */

#include <stdio.h>

int StrPrint(char *str)
{
	printf("%s\n", str);
	return 0;
}

main()
{
	char str[24] = "pointing to a function.";

	int(*ptr) (char *str);
        ptr = StrPrint;

	
	if(!(*ptr) (str))
		printf("Done!\n");

	return 0;
}
