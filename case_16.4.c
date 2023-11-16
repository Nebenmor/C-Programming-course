/* Write a program that passess an int array of array size '5' to a function and sums up all th contents of the array */

#include <stdio.h>

int function_add_array(int array_list [5]);	/*function is declared an array_list is passes as the argument with array size of '5'  */


int function_add_array(int array_list[5])	/* function definition */
{
	int i;
	int result = 0;

	for(i=0; i<5; i++)
	{
	result += array_list[i];
	}

	return result;
}

main()
{
	int array_list[5];
	
	printf("Enter 5 integrers seperated by single spaces:\n");
	scanf("%d %d %d %d %d", &array_list[0], &array_list[1], &array_list[2], &array_list[3], &array_list[4]);

	/* calling function_add_array() */
	printf("Sum of all the entered integers: %d\n", function_add_array(array_list));

	return 0;
}
	
