/* Write a program that shows that the calloc function initializes  to zero */

#include <stdio.h>
#include <stdlib.h>

main()
{
	float n, *ptr;

	printf("Enter number of values to be entered\n");
	scanf("%f", &n);

	ptr = (float*) calloc(n, sizeof(float));

	printf("\n");

	int i;
	for(i = 0; i < n; i++)
		printf("%.2f\n", *(ptr + i));

	free(ptr);

	return 0;
}
