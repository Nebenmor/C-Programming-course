/* Write a program that prints the integers that can be divided by both 2 and 3 within the range of 0-100 */

#include <stdio.h>
main()
{
	int x;

	printf("Integers that can be divided by both 2 and 3\n(within the range of 0-100)\n");
	for(x = 0; x <= 100; x++){
	if((x%2==0) && (x%3==0))
		printf("%d\n", x);
	}
	return 0;
}
