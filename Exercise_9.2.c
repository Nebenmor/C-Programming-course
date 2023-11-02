/* Write a program to measure the sizes of short int, long int, and long double on your machine */

#include <stdio.h>
main()
{
	printf("The size of short int in my machine is: %d\n", sizeof(short int));
	printf("The size of long int in my machine is: %d\n", sizeof(long int));
	printf("The size of long double in my machine is: %d\n", sizeof(long double));
	return 0;
}
