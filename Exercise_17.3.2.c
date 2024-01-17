/* write a program to ask the user to enter total number of float data. Then use the calloc() and malloc function to allocate two memory of wih the same size specified by the number, and print out the initial value of the two blocks. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float n;
	float *ptr1, *ptr2;
	int termination;

	printf("Enter the number of float values to be entered\n");
	scanf("%f", &n);

	ptr1 = (float*) calloc(n, sizeof(float));
	ptr2 = (float*) malloc(n * sizeof(float));

	if(ptr1 == NULL)
	{
		printf("calloc() function failed\n");
		termination = 1;
	}

	else if(ptr2 == NULL)
	{
		printf("malloc() function failed\n");
                termination = 1;
	}
	else
	{
		int i;
		for(i =0; i < n; i++)
	{
		printf("Initial value of ptr1[%d]: %.2f\n", i, ptr1[i]);
		printf("Initial value of ptr2[%d]: %.2f\n", i, ptr2[i]);
		termination = 0;
	}

	}

	return termination;

	free(ptr1);
	free(ptr2);

}
