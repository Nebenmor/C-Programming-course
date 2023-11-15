#include <stdio.h>
#include <string.h>

main()
{
	char str1[] = "This is exercise 1.";
	char str2[20]; 

	strcpy(str2, str1);

	printf("str2: %s\n", str2);
	
	return 0;
}
