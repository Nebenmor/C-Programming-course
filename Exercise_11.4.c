#include <stdio.h>
main()
{
	int x, y, *ptr_x, *ptr_y, *ptr_mult;
	x = 5;
	y = 6;

	printf("initial value of x is %d\n", x);

	ptr_x = &x;
	ptr_y = &y;

	ptr_mult = &x;

	*ptr_mult = x * y;

	printf("*ptr_mult >> %d\n", *ptr_mult);
	printf("The new value of x is %d\n", x);

	return 0;
}
