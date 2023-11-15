/* Assessing arrays via pointers */

#include <stdio.h>

main()
{
	int array_int [] = {10, 20, 30, 40, 50};
	char array_ch [] = "I am a blessing.";

	int *ptr_int;
	char *ptr_ch;

	ptr_int = array_int;
	ptr_ch = array_ch;

	/* for array_int */
	printf("Before updating array_int[], array_int [3] contained %d\n", array_int [3]);
	*(ptr_int + 3) = 70;
	printf("After updating array_int[], array_int [3] now contains %d\n", array_int [3]);

	/* for array_ch */
	printf("array_ch [] = %s\n", array_ch);
	printf("array_ch [] = %s\n", ptr_ch);
	printf("Before updating: array_ch [7] = %c\n", array_ch [7]);
	*(ptr_ch + 7) = 'B';

	printf("After updating: array_ch [7] now contains %c\n", array_ch [7]);
	printf("array_ch []: %s\n", array_ch);

	return 0;
}
