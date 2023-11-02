/* using signed and unsigned data modifiers */

#include <stdio.h>
int main()
{
	signed char ch;
	int x;
	unsigned y;

	ch = 0xFF;
	x = 0XFFFF;
	y = 0XFFFFu;

	printf("The decimal value of signed 0xFF is %d\n", ch);
	printf("The decimal value of signed 0XFFFF is %d\n", x);
	printf("The decimal value of unsigned 0XFFFFu is %u\n", y);
	printf("The hex value of 1234 is 0x%X\n", 1234);
	printf("The hex value of -1234 is 0x%X\n", -1234);

	return 0;
}
