/* Using the logical negation operator */
#include <stdio.h>

main()
{
	int i = 7;

	printf("Given i = 7\n");
	printf("!(i<7) will yield: %d\n", !(i<7));
	printf("!(i>7) will yield: %d\n", !(i>7));
	printf("!(i==7) will yield: %d\n", !(i==7));
	return 0;
}
