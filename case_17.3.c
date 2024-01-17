/* Enter n float values from users and dynamically allocate memory to them using the calloc() function, and afterwards, free the memory */

#include <stdio.h>
#include <stdlib.h>

main()
{
	float n, *ptr;

	printf("Enter number of values to be entered\n");
	scanf("%f", &n);

	ptr = (float*) calloc(n, sizeof(float));

	printf("Enter the values\n");

	int i;
	for(i=0; i < n; i++)
		scanf("%f", (ptr + i));

	for(i = 0; i < n; i++)
		printf("%f\n", *(ptr + i));

	free(ptr);

	return 0;
}
