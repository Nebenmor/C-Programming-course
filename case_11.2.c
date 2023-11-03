/* Declaring and assigning values to pointers */

#include <stdio.h>

main()
{
	char x, *ptr_x;
	int y, *ptr_y;
	float z, *ptr_z;
	
	x = 'A';
	y = 7;
	z = 123.45;

	printf("x: address is %p, content is %c\n", &x, x);
	printf("y: address is %p, content is %d\n", &y, y);
	printf("z: address is %p, content is %5.2f\n", &z, z);

	ptr_x = &x;
	ptr_y = &y;
	ptr_z = &z;

	printf("*ptr_x: address is %p, content address is %p\n", &ptr_x, ptr_x);
	printf("*ptr_y: address is %p, content address is %p\n", &ptr_y, ptr_y);
	printf("*ptr_z: address is %p, content address is %p\n", &ptr_z, ptr_z);

	printf("*ptr_x: content is %c\n", *ptr_x);
	printf("*ptr_y: content is %d\n", *ptr_y);
        printf("*ptr_z: content is %5.2f\n", *ptr_z);

	return 0;
}
