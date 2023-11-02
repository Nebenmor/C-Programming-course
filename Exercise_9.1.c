/*
 * Given the following statements,
int x;
unsigned int y;
x = 0xAB78;
y = 0xAB78;
write a program to display the decimal values of x and y on the screen 
*/

#include <stdio.h>
main()
{
	int x;
	unsigned int y;

	x = 0xAB78;
	y = 0xAB78u;

	printf("The decimal value of x is %d\n", x);
	printf("The decimal value of y is %u\n", y);
	return 0;
}
