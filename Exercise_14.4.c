/* write a program that calls a variable declared with the static specifier in a user-generated function and called in the main function */

#include <stdio.h>

int add_function(int x, int y) /* a function that add two integers */
{
	
	static int result = 0;
	static int counter = 1;	/* the variable 'counter' helps to keep track
			       of how many times the add_function will be called in this program.
			       It has the static specifier to designate it as having a permanent memory allocation */
	
	printf("the previous value of sum is %d\n", result);
	printf("counter = %d\n", counter++);

	result = x + y;
	
	return (result);
}

main()
{
	int i, j;

	for (i = 0, j = 10; i <= 10; i++, j--)
		printf("the addition of %d and %d = %d\n\n", i, j, add_function(i, j));

	return (0);
}
