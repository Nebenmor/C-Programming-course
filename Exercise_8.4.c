/* write a program that shows the value in hex of the XOR, & and | bitwise operators */

#include <stdio.h>
main()
{
	int a, b, c, d, e, f;
	a = 0xFFFF;
	b = 0X8888;
	c = 0xABCD;
	d = 0x4567;
	e = 0xDCBA;
	f = 0x1234;

	printf("The value in hex of the expression 0xFFFF^0x8888 is 0X%X\n", a^b);
	printf("The value in hex of the expression 0xABCD&0x4567 is 0X%X\n", c&d);
	printf("The value in hex of the expression 0xDCBA|0x1234 is 0X%X\n", e|f);
	return 0;
}
