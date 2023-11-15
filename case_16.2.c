/* pointer subtraction */

#include <stdio.h>

main()
{
	int *ptr_int1, *ptr_int2;

	ptr_int2 = ptr_int1 + 5;

	printf("The current position of ptr_int1: %p\n", ptr_int1);
	printf("The current position of ptr_int2 = ptr_int1 + 5: %p\n", ptr_int2);
	printf("Subtracting: ptr_int2 - ptr_int1: %d\n", ptr_int2 - ptr_int1);

	return 0;
}
