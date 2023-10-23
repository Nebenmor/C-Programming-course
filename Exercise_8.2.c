/* Write a program that prints out the value of !x and !y by using both the %d and %u format specifiers */

#include <stdio.h>
main()
{
	int x = 0xEFFF;
	int y = 0x1000;

	printf("!x will yield %d and %u\n", !x, !x);
	printf("!y will yield %d and %u\n", !y, !y);
	return 0;
}
