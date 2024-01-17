#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CopyStr(char *str1, char *str2)
{
	int i;
	for(i = 0; str1[i]; i++)
	{
		str2[i] = str1[i];
	}
		str2[i] = '\0';

}

main()
{
	char str[] = "C programming is exciting.";	/* unsized array */
	char *ptr_str;
	int result;

	ptr_str = (char*) malloc(strlen(str) + 1);

	if(ptr_str != NULL)
	{
		CopyStr(str, ptr_str);
		printf("%s\n", ptr_str);
		result = 0;

	}

	else
	{
		printf("malloc() function failed\n");
		result = 1;
	}

	printf("return value: %d\n", result);
	
	return result;
}

