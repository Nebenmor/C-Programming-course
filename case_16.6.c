/* 
 * Passing multidimensional arrays to functions: Write a program that adds up all the integers of the 
 * int multidemensioonal array >> int list[2][5] = {1, 2, 3, 4, 5,
                                			5, 4, 3, 2, 1};
 * */

#include <stdio.h>

int Add_MD_Array(int list[2][5], int max1, int max2);
int Add_MD_Array(int list[2][5], int max1, int max2)
{
	int i, j;
	int sum = 0;

	for(i = 0; i < max1; i++)
	{
		for(j = 0; j < max2; j++)
		{
			sum += list[i][j];
		}
	}

	return sum;
}

main()
{
	int list[2][5] = {1, 2, 3, 4, 5,
				5, 4, 3, 2, 1};

	printf("The sum of the multidimensional array 'list' is %d\n", Add_MD_Array(list, 2, 5));

	return 0;
}
