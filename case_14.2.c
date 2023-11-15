/* Program Scope vs Block Scope */

#include <stdio.h>

int x = 1234;
float y = 1.234567;

void function_1()
{
	printf("from function_1\n x = %d, y = %f\n", x, y);
}

main()
{
	int x = 4321; /* block scope */

	function_1();
	printf("within the main block:\n, x = %d, y = %f\n", x, y);
	/* a nested block */
	{
		double y = 7.654321;	/* block scope 2 */
		function_1();
		printf("within the nested block:\n x = %d, y = %f\n", x, y);
	}

	return 0;
}
