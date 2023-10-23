/* Given x = 96, y = 1, and z = 69, to what does the expression !y ? x==z : y evaluate? */

#include <stdio.h>
main()
{
	int x, y, z;
	x = 96;
	y = 1;
	z  = 69;

	printf("!y ? x==z : y evaluate to %d\n", !y ? x==z : y);
	return 0;
}
