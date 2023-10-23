/* Evaluating the complement '~' of x and y and printing the result in hex format */

#include <stdio.h>
main()
{
	int x = 0xEFFF;
	int y = 0X1000;

	printf("The hex value of ~x will yield: 0x%X\n", ~x);
	printf("The hex value of ~y will yield: 0x%X\n", ~y);
	return 0;
}
