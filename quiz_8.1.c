/* What do the (x = 1) && (y = 10), and (x = 1) & (y = 10) expressions yield respectively? */

#include <stdio.h>
main()
{
	int x, y;

	x = 1;
	y = 10;

	printf("(x = 1) && (y = 10) will yield %d\n", (x = 1) && (y = 10));
	
	x = 1; /* reset x to 1 */
	y = 10;

	printf("(x = 1) & (y = 10) will yield %d\n", (x = 1) & (y = 10));
	return 0;
}
