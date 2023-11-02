/* using a for loop to print A through G */

#include <stdio.h>

main ()
{
	int i;

	for(i = 65; i <= 71; i++) {
		printf("The value of %c is %d.\n", i, i);
	}

	return 0;
}
