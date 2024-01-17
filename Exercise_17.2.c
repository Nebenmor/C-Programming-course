/* Write a program that allocates a block of memory space to hold 100 times of the float data type by calling the calloc() function. Then reallocate the memory in order to hold 50 more items */

#include <stdio.h>
#include <stdlib.h>

main()
{
	float n = 100;
	float *ptr;
	float *ptr1;
	int termination;

	ptr = (float*) calloc(n, sizeof(float));
	
	if(ptr == NULL)
	{
	printf("calloc() failed\n");
	termination = 1;
	}

	else
	{
		ptr1 = (float*) realloc(ptr, (n+50) * sizeof(float));
		
		if(ptr1 == NULL)
		{
			printf("realloc() failed\n");
			termination = 1;
		}

		else
		{
			free(ptr1);
		}

		printf("Allocation and reallocation successful. All good!\n");
		return termination;
	}

	return 0;
}
