/* Nested block statement */

#include <stdio.h>
main()
{
	int i = 50; /* outer block */

	printf("variable 'i' of outer block is %d\n", i);

	printf("\n");

	{	/* inner block */
		int i, j;

		printf("Inner block\n");

		for (i = 0, j = 10; i <= 10, j >= 0; i++, j--)
			printf("i =  %d, j = %d\n", i, j);

	}	/* end of inner block */

	printf("\n");

	printf("variable 'i' of outer block is %d\n", i);	/* outer block */

	return (0);

}
