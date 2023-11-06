/* Referencing an array with a pointer */

#include <stdio.h>

main()
{
	int i;
	int list_int [10];
	int *ptr_int;

		for(i=0; i<10; i++){
		
		list_int[i] = i + 1;
		}

		ptr_int = list_int;

		printf("the start address of the array is %p\n", ptr_int);
		printf("the value of the first element is %d\n", *ptr_int);

		ptr_int = &list_int[0];
		printf("the address of the first element is %p\n", ptr_int);
		printf("the value of the first element is %d\n", *ptr_int);
	
	return 0;
}
