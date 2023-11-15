/* callin a function */

#include <stdio.h>

int MultiTwo(int x, int y);

int MultiTwo(int x, int y)
{
	return x * y;
}


main()
{
	int x = 10;
	int y = 5;

	printf("calling the MultiTwo function\n");
	printf("the multiplicative value of %d and %d is %d\n", x, y, MultiTwo(x, y));

	return 0;
}
