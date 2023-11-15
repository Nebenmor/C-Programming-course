/* making function calls: Here the user-generated function 'function_1 was declared outside the main function and defined then called in the main function */

#include <stdio.h>

int function_1 (int x1, int y1);

float function_2 (float x2, float y2)
	{
	float result_2 = x2 - y2;
	printf("within funcction_2\n");
	return (result_2);
	}

main()
{
	int function_1 (int x1, int y1)
	{
        int result_1 = x1 + y1;
        printf("within function_1\n");
        return (result_1);
        }

	int x1 = 10;
	int y1 = 20;
	float x2 = 23.50f;
	float y2 = 13.50f;

	printf("values passed to function_1: %d, %d\n", x1, y1);
	printf("calling function_1:\nsum is %d\n\n", function_1 (x1, y1));

	printf("values passed to function_2: %f, %f\n", x2, y2);
        printf("calling function_2:\nOn subtraction is %f\n", function_2 (x2, y2));

	return 0;
}

