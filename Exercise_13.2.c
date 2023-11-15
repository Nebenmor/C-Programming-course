/* Write a program to measure the length of a string by evaluating the elements in a character array one by one until you reach the null character. To prove you get the right result, you can use the strlen() function to measure the same string again. */

#include <stdio.h>
main()
{
	char str_a[] = "I am great";
	int i;

	for(i = 0; str_a[i]; i++)
		str_a++;
	
	printf("the length of str_a is: %d\n", str_a);

	printf("*method 2*");

	printf("the length of str_a is: %d\n", str_a);

	return 0;
}

