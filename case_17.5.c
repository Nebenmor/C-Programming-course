/* Write a program that shows the initialized values of malloc function () */

#include <stdio.h>
#include <stdlib.h>

main()
{
	int n, *ptr;

	printf("Enter number of values to be entered\n");
	scanf("%d", &n);

	ptr = (int*) malloc(n * sizeof(int));

	printf("\n");

	int i;
	for(i = 0; i < n; i++)
		printf("initial values: %d\n", *(ptr + i));

	free(ptr);

	return 0;
}
