/* Initializing unsized arrays */

#include <stdio.h>
main()
{
	char array_ch[] = {'C', ' ',
				'is', ' ',
				'p', 'o', 'w', 'e', 'r', ' ',
				'f','u','l', '!','\0'};

	int list_int[][3] = {
				1, 1, 1,
				2, 2, 8,
				3, 9, 27,
				4, 16, 64,
				5, 25, 125,
				6, 36, 216,
				7, 49, 343};

	printf("the size of array_ch[] is %d-bytes\n", sizeof(array_ch));
	printf("the size of list_int[][3] is %d-bytes\n", sizeof(list_int));

	return 0;
}
