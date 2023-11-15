/* Initializing strings */

#include <stdio.h>
#include <string.h>
main()
{
	char str1[] = {'A',' ',
			's', 't', 'r', 'i', 'n', 'g', ' ',
			'c', 'o', 'n', 's', 't', 'a', 'n', 't', '\0'};

	char str2[] = "Another string constant";
	char *ptr_str = "Assign a string to a pointer.";
	
	printf("the length of str1[] is %d-bytes\n", strlen(str1));
	printf("the length of str2[] is %d-bytes\n", strlen(str2));
	printf("the length of the string assigned to ptr_str is %d-bytes\n", strlen(ptr_str));

	return 0;
}
