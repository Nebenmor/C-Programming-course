/* Using a while and do-while loop to create a nested loop */

#include <stdio.h>

main()
{
	int i;
	i = 1;

	while(i <= 3){	/* start of outer loop */
	       printf("The start of the %d iteration of the outer loop.\n", i);
	       		int j;
			j = 1;

	       		do{ /* start of inner loop */
				printf("Iteration %d of the inner loop\n", j);
				j++;
			}while (j <= 4); /* end of inner loop */
			
		i++;
	} /* end of outer loop */

	printf("Out of the outer loop. Bye!\n");

	return 0;
}
