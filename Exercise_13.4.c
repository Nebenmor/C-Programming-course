/*  Write a program that uses the scanf() function to read in two integers entered by the user, adds the two integers, and then prints out the sum on the screen.*/

#include <stdio.h>
main()
{
	int x, y, z;

	printf("Enter two intgers seperated by a single space\n");

	scanf("%d %d\n", &x, &y);
	
	z = x + y;	
	printf("%d\n", z);
	
	return 0;
}
