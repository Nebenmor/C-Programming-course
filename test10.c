/* passing pointers to function */

#include <stdio.h>

void ChPrint(char *str);	/* function declaration */
void ChPrint(char *str)	/* function definition */
{
	printf("%s\n", str);
}

int DataAdd(int *list, int max);	/* function declaration */
int DataAdd(int *list, int max)
{
	int i, sum = 0;
	for(i = 0; i < max; i++){
		sum += list[i];
	}

	return sum;
}

int main()
{
	char str[] = "It's a string";	/* declaration and intialization of array */

	char *ptr_str;	/* declaration of pointer */

	/* passing the actual pointer variable/variable to replace the placeholder and calling the function */
	ptr_str = str;
	ChPrint(ptr_str);
	ChPrint(str);

	int list[5] = {1, 2, 3, 4, 5};
	int *ptr_list;
	ptr_list = list;
	
	/* Calling the DataAdd() function */
	printf("The sum of all the integers of the array 'list' is %d\n", DataAdd(list, 5));
	printf("The sum of all the integers of the array 'list' is %d\n", DataAdd(ptr_list, 5));
	
	return 0;
}		
