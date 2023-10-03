/* Using the logical AND operator */
#include <stdio.h>

main()
{
	int i;
	
	i = 0;
	printf("The AND operator yields: %d\n", (i%2 == 0) && (i%3 == 0));

	i = 2;
	printf("The AND operator yields: %d\n", (i%2 == 0) && (i%3 == 0));

	i = 3;
	printf("The AND operator yields: %d\n", (i%2 == 0) && (i%3 == 0));

	i = 6;
	printf("The AND operator yields: %d\n", (i%2 == 0) && (i%3 == 0));
	return 0;
}
