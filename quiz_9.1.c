/* Given an int variable x and an unsigned int variable y, as well as x = 0x8765 and y = 0x8765, and if the leftmost bit is used as a sign bit, is x equal to y? */

#include <stdio.h>
main()
{
	int x;
	unsigned int y;

	x = 0x8765;
	y = 0x8765u;

	printf("x will yield %d\n", x);
	printf("y will yield %u\n", y);
	return (0);
}
