/* calculating the size of an array */

#include <stdio.h>
main()
{
	int i;
	int total_bytes[10];


	printf("the size of int is %d-bytes long\n", sizeof(int));
	printf("an array of 10 elements has a total byte of %d\n", sizeof(total_bytes));
	printf("the address of the first element is %p\n", &total_bytes[0]);
	printf("the address of the last element is %p\n", &total_bytes[9]);
	
	return 0;
}
