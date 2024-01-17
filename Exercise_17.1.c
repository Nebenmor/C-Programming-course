/* write a program to ask the user to enter the total number of bytes (i.e values) he or she wants to allocate. Then initialize the allocated memory with consecutive integers starting from 1. Add all the integers contained in the memory block and print out the final result on the screen */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, *ptr;
	int n = 0;
	int termination = 0;

	printf("Enter the total number of values\n");

	scanf("%d", &n);

	ptr = (int*) calloc(n, sizeof(int));


		
	if(ptr == NULL)
	{
		printf("calloc() failed: returned 1\n");
		termination = 1;
	}

	else
	{
		for(i=0; i < n; i++)
		ptr[i] = ptr[i] + 1;
	}
	
	int sum = 0;
	
	for(i = 0; i < n; i++)
	sum += ptr[i];
	printf("the sum is: %d\n", sum);

	free(ptr);

	return termination;
}
