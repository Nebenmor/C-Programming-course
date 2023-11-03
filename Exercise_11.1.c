/* A program that prints out left and right values */

#include <stdio.h>

main()
{
	int x, y, z;
	x = 512;
	y = 1024;
	z = 2048;

	printf("x: left value = %p, right value =%d\n", &x, x);
	printf("y: left value = %p, right value =%d\n", &y, y);
	printf("z: left value = %p, right value =%d\n", &z, z);
	return 0;
}
