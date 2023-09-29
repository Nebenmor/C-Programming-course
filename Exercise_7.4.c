/* Using while and do-while loop in a Nested loop */

#include <stdio.h>
main()
{
	int i, j;

	i=1;
	while (i<=3) {	/* outer loop */
		printf("The start of iteration %d of the outer loop.\n", i);
		j = 1;
		do{ /* inner loop */
		printf("iteration %d of the inner loop.\n", j);
		j++;
		}while(j<=4);
		printf("The end of iteration %d of the outer loop.\n", i);
		i++;
	}

	return 0;
}
