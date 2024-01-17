/* write a program that dynamically allocate memory for 'n' number of integers entered by a user */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n, *ptr, i;

	printf("Total number of values to be entered:\n");
	scanf("%d", &n);

	printf("Enter the integer values:\n");
	ptr = (int*) malloc(n*sizeof(int));
	for(i = 0; i < n; i++)
	{
		scanf("%d", ptr + i);
	}

	printf("The values entered are:\n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n", *(ptr + i));
	}

	free(ptr);

	return 0;
}

